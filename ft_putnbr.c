/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchakir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 02:59:03 by elchakir          #+#    #+#             */
/*   Updated: 2023/10/03 21:25:54 by elchakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, int *len)
{
	unsigned int	n;

	if (nb < 0)
	{
		ft_putchar('-', len);
		nb *= -1;
	}
	n = nb;
	if (n < 10)
	{
		ft_putchar(n + 48, len);
	}
	else
	{
		ft_putnbr(n / 10, len);
		ft_putnbr(n % 10, len);
	}
}
