/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analaphi <analaphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:42:54 by analaphi          #+#    #+#             */
/*   Updated: 2025/10/17 11:21:37 by analaphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	unsigned int	i;
	char			cc;
	char			*res;

	i = 0;
	res = NULL;
	cc = (char)c;
	while (str[i])
	{
		if (str[i] == cc)
			res = ((char *) &str[i]);
		i++;
	}
	if (str[i] == cc)
		res = ((char *) &str[i]);
	return (res);
}
