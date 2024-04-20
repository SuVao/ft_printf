<<<<<<< HEAD
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
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:52:23 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/20 17:25:24 by pesilva-         ###   ########.fr       */
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
>>>>>>> ec3c761 (putnbr)
}