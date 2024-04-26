/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:17:29 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/26 11:56:18 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_digits(unsigned long long n, int i)
{
	if (n == 0)
		return (1);
	while (n != 0)
	{
		i++;
		n /= 16;
	}
	return (i);
}

static void	ft_putptr_pf_aux(unsigned long long n, int i)
{
	if (n >= 16)
		ft_putptr_pf_aux(n / 16, i);
	ft_putchar_pf(LOW_HEX[n % 16], i);
}

int	ft_putptr_pf(void *ptr, int i)
{
	if (ptr == NULL)
	{
		write(1, "(nil)", 5);
		return (i += 5);
	}
	ft_putstr_pf("0x", i);
	ft_putptr_pf_aux((unsigned long long)ptr, i);
	return (count_digits((unsigned long long)ptr, i) + 2);
}
