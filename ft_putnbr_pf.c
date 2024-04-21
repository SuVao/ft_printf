/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:52:23 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/21 17:54:05 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_pf(int nb, int i)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		i++;
		n = -n;
		write(1, "-", 1);
	}
	if (n < 10)
		ft_putchar_pf(DEC_BASE[n], i);
	if (n > 9)
	{
		i++;
		ft_putnbr_pf(n / 10, i);
		ft_putchar_pf(DEC_BASE[n % 10], i);
	}
	i++;
	return (i);
}
