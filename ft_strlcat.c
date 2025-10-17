/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analaphi <analaphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:41:14 by analaphi          #+#    #+#             */
/*   Updated: 2025/10/15 13:41:43 by analaphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	size_d;
	size_t	size_s;

	size_d = ft_strlen(dst);
	size_s = ft_strlen(src);
	if (size_d >= size)
		size_d = size;
	if (size_d == size)
		return (size + size_s);
	if (size_s < size - size_d)
		ft_memcpy(dst + size_d, src, size_s + 1);
	else
	{
		ft_memcpy(dst + size_d, src, size - size_d - 1);
		dst[size - 1] = '\0';
	}
	return (size_d + size_s);
}
