<<<<<<< HEAD
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
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:17:29 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/20 17:28:18 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_digits(unsigned long long n)
{
	int	count_d;

	count_d = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		count_d++;
		n /= 16;
	}
	return (count_d);
}

static void	ft_putptr_pf_aux(unsigned long long n)
{
	if (n >= 16)
		ft_putptr_pf_aux(n / 16);
	ft_putchar_pf(LOW_HEX[n % 16]);
}

int	ft_putptr_pf(void *ptr)
{
	if (ptr == NULL)
		return (write(1, "(nil)", 5));
	ft_putstr_pf("0x");
	ft_putptr_pf_aux((unsigned long long)ptr);
	return (count_digits((unsigned long long)ptr) + 2);
}
>>>>>>> ec3c761 (putnbr)
