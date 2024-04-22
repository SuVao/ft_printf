/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uphex_pf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:46:51 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/22 09:20:46 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_uphex_pf(unsigned long long n, int i)
{
	if (n >= 16)
		ft_uphex_pf(i / 16, i);
	ft_putchar_pf(&UP_HEX[i % 16], i);
	return (i);
}
