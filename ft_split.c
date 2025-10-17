/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analaphi <analaphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:59:48 by analaphi          #+#    #+#             */
/*   Updated: 2025/10/16 16:38:41 by analaphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_charset(char c, char charset)
{
	if (charset == c)
		return (1);
	return (0);
}

static char	*ft_add_word(char *src, int size)
{
	int		i;
	char	*dest;

	i = 0;
	dest = NULL;
	dest = malloc(sizeof(char) * (size + 1));
	if (dest == NULL)
		return (0);
	while (src[i] && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static int	ft_word_len(char *str, char charset)
{
	int	i;

	i = 0;
	while (str[i] && !ft_is_charset(str[i], charset))
		i++;
	return (i);
}

static int	ft_count_words(char *str, char charset)
{
	int	i;
	int	count;
	int	word_len;

	i = 0;
	count = 0;
	word_len = 0;
	while (str[i] != '\0')
	{
		while (str[i] && ft_is_charset(str[i], charset))
			i++;
		word_len = ft_word_len(str + i, charset);
		if (word_len)
			count++;
		i += word_len;
		word_len = 0;
	}
	return (count);
}

char	**ft_split(char *str, char charset)
{
	int		count_words;
	char	**arr;
	int		word_len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	word_len = 0;
	count_words = ft_count_words(str, charset);
	arr = malloc(sizeof(char *) * (count_words + 1));
	if (!arr)
		return (NULL);
	while (str[i] != '\0')
	{
		while (str[i] && ft_is_charset(str[i], charset))
			i++;
		word_len = ft_word_len(str + i, charset);
		if (word_len)
			arr[j++] = ft_add_word(str + i, word_len);
		i += word_len;
		word_len = 0;
	}
	arr[j] = NULL;
	return (arr);
}
