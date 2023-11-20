/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchakir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 03:06:47 by elchakir          #+#    #+#             */
/*   Updated: 2023/10/03 21:32:17 by elchakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_u(unsigned int n, int *len)
{
	if (n < 10)
	{
		ft_putchar(n + 48, len);
	}
	else
	{
		ft_putnbr_u(n / 10, len);
		ft_putnbr_u(n % 10, len);
	}
}
