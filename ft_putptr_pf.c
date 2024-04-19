/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:43:32 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/19 19:43:32 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_pf(unsigned long long n)
{
	int	count;

	count = 0;
	count += ft_putstr_pf("0x");
	if (n >= 16)
	{
		count += ft_putptr_pf(n / 16);
		count += ft_putchar_pf(n % 16 + '0');
	}
	else
		count += ft_putchar_pf(n + '0');
	return (count);
}