/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigint_pf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 19:00:06 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/20 19:00:06 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigint_pf(unsigned int i)
{
	long	n;
	int		count;

	count = 0;
	n = i;
	if (n < 0)
		return (count += ft_putstr_pf("4294967295"));
	if (n < 10)
		ft_putchar_pf(DEC_BASE[n]);
	if (n > 9)
	{
		count++;
		ft_unsigint_pf(n / 10);
		ft_putchar_pf(DEC_BASE[n % 10]);
	}
	count++;
	return (count);
}