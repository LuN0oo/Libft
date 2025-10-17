/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analaphi <analaphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:31:21 by analaphi          #+#    #+#             */
/*   Updated: 2025/10/17 13:35:52 by analaphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intlen(long n)
{
	int	count;

	if (n == 0)
		return (1);
	count = 0;
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*res;
	int		count;
	int		is_neg;

	nb = n;
	is_neg = (nb < 0);
	if (nb < 0)
		nb = -nb;
	count = intlen(nb) + is_neg;
	res = malloc(sizeof(char) * (count + 1));
	if (!res)
		return (NULL);
	res[count] = '\0';
	while (count > is_neg)
	{
		res[count - 1] = (nb % 10) + '0';
		nb /= 10;
		count--;
	}
	if (is_neg)
		res[0] = '-';
	return (res);
}
