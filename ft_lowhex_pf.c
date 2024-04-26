/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowhex_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:44:27 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/25 21:57:52 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lowhex_pf(unsigned long long n, int i)
{
	if (n >= 16)
		ft_lowhex_pf(n / 16, i);
	ft_putchar_pf(LOW_HEX[i % 16], i);
	return (i);
}
