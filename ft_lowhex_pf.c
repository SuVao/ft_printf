/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowhex_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:19:19 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/22 16:27:54 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lowhex_pf(unsigned long long n, int i)
{
	if (n >= 16)
		i = ft_lowhex_pf(n / 16, i);
	i = ft_putchar_pf(LOW_HEX[n % 16], i);
	return (i);
}
