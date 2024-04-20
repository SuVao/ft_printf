/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:52:23 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/20 18:01:04 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_pf(int i)
{
	long	n;
	int		count;

	count = 0;
	n = i;
	if (n < 0)
	{
		count++;
		n = -n;
		write(1, "-", 1);
	}
	if (n < 10)
		ft_putchar_pf(DEC_BASE[n]);
	if (n > 9)
	{
		count++;
		ft_putnbr_pf(n / 10);
		ft_putchar_pf(DEC_BASE[n % 10]);
	}
	count++;
	return (count);
}