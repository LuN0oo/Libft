/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analaphi <analaphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:37:15 by analaphi          #+#    #+#             */
/*   Updated: 2025/10/16 18:55:00 by analaphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	to_trim(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*trimmed_str(const char *str, size_t start, size_t len)
{
	size_t	i;
	char	*new_str;

	i = 0;
	if (len <= 0 || start >= ft_strlen(str))
		return (ft_strdup(""));
	new_str = ft_calloc(len + 1, sizeof(char));
	if (!new_str)
		return (NULL);
	while (i < len)
	{
		new_str[i] = str[i + start];
		i++;
	}
	return (new_str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	while (to_trim(set, s1[i]))
		i++;
	while (to_trim(set, s1[j]))
		j--;
	return (trimmed_str(s1, i, j - (i - 1)));
}
