/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analaphi <analaphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:54:05 by analaphi          #+#    #+#             */
/*   Updated: 2025/10/15 19:44:21 by analaphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_lowercase(int c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_is_uppercase(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_isalpha(int c)
{
	if (ft_is_lowercase(c) || ft_is_uppercase(c))
		return (1);
	return (0);
}
