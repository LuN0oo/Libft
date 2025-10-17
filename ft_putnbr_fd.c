/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analaphi <analaphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 19:17:51 by analaphi          #+#    #+#             */
/*   Updated: 2025/10/16 19:47:52 by analaphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nu;

	nu = n;
	if (nu < 0)
	{
		ft_putchar_fd('-', fd);
		nu *= -1;
	}
	if (nu / 10 != 0)
		ft_putnbr_fd(nu / 10, fd);
	ft_putchar_fd(nu % 10 + '0', fd);
}
