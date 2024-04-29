/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowhex_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:44:27 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/29 17:09:43 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* static int	nbr_len(unsigned long long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 16;
		i++;
	}
	return (i);
} */

int	ft_lowhex_pf(unsigned long long n, int i)
{
	if (n >= 16)
		i = ft_lowhex_pf(n / 16, 1);
	i = ft_putchar_pf(LOW_HEX[n % 16], 1);
	return (i);
}

/* int ft_lowhex_pf(unsigned long long n, int i)
{
	while (n >= 16)
	{
		ft_putchar_pf(LOW_HEX[n % 16], i);
		n /= 16;
	}
	if (n < 16)
		ft_putchar_pf(LOW_HEX[n % 16], i);
	return (nbr_len(n) + i);
} */

/* int ft_lowhex_pf(unsigned long long n, int i)
{
	char	s[nbr_len(n) + 1];
	int		j;
	int		len;

	len = nbr_len(n);
	j = 0;
	while (n > 16 && j < nbr_len(n))
	{
		s[len] = LOW_HEX[n % 16];
		n /= 16;
		len--;
	}
	if (n < 16)
		s[j] = LOW_HEX[n % 16];
	while (s[j])
		ft_putchar_pf(s[j++], i);
	printf("string lowhe: %s \n", s);
	return (nbr_len(n) + i);
} */