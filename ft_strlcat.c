/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analaphi <analaphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:41:14 by analaphi          #+#    #+#             */
/*   Updated: 2025/10/22 13:32:43 by analaphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	d;
	size_t	s;
	size_t	i;

	d = 0;
	s = 0;
	if (!dest && size == 0)
		return (ft_strlen(src));
	while (dest[d] && d < size)
		d++;
	while (src[s])
		s++;
	i = 0;
	while (src[i] && (d + i + 1) < size)
	{
		dest[d + i] = src[i];
		i++;
	}
	if (d < size)
		dest[d + i] = '\0';
	return (d + s);
}
