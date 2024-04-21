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

int	ft_unsigint_pf(unsigned int nb, int i)
{
	long	n;

	n = nb;
	if (n == 4294967295)
		return (ft_putstr_pf("4294967295", i));
	while (n > 9)
	{
		n /= 10;
		ft_putchar_pf(DEC_BASE[n % 10], i);
	}
	if (n < 10)
		ft_putchar_pf(DEC_BASE[n], i);
	return (i);
}
