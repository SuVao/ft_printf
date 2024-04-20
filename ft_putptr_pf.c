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

static int ft_putptr_pf_aux(unsigned long long n, int count)
{
	if (n >= 16)
		count += ft_putptr_pf_aux(n / 16, count);
	count += ft_putchar_pf("0123456789abcdef"[n % 16]);
	return (count);
}

int	ft_putptr_pf(unsigned long long n)
{
	int	count;

	count = 0;
	count += ft_putstr_pf("0x");
	count += ft_putptr_pf_aux(n, count);
	return (count);
}