/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:43:54 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/19 19:43:54 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_pf(int n)
{
	long	nb;
	int		count;

	count = 0;
	nb = n;
	if (nb < 0)
	{
		count += ft_putchar_pf('-');
		nb = -nb;
	}
	if (n < 0)
	{
		count += ft_putchar_pf('-');
		n = -n;
	}
	if (n >= 10)
	{
		count += ft_putnbr_pf(n / 10);
		count += ft_putchar_pf(n % 10 + '0');
	}
	else
		count += ft_putchar_pf(n + '0');
	return (count);
}