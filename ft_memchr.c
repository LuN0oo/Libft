/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analaphi <analaphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:43:22 by analaphi          #+#    #+#             */
/*   Updated: 2025/10/15 13:31:43 by analaphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	cc;
	unsigned char	*strtemp;

	i = 0;
	cc = (unsigned char) c;
	strtemp = (unsigned char *)str;
	while (i < n)
	{
		if (strtemp[i] == cc)
			return ((void *) &strtemp[i]);
		i++;
	}
	return (NULL);
}
