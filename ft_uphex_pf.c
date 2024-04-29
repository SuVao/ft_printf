/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uphex_pf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:46:51 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/25 21:58:17 by pesilva-         ###   ########.fr       */
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

int	ft_uphex_pf(unsigned long long n, int i)
{
	if (n >= 16)
		i = ft_uphex_pf(n / 16, i);
	i = ft_putchar_pf(UP_HEX[n % 16], i);
	return (i);
}

/* int ft_uphex_pf(unsigned long long n, int i)
{
	char	s[nbr_len(n)];
	int		j;

	j = 0;
	while (n > 16 && j < nbr_len(n))
	{
		s[j] = UP_HEX[n % 16];
		n /= 16;
		j++;
	}
	if (n < 16)
		s[j] = UP_HEX[n % 16];
	j = 0;
	while (s[j])
		ft_putchar_pf(s[j++], i);
	return (nbr_len(n) + i);
} */