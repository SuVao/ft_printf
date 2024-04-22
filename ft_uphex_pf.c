/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uphex_pf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:11:13 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/22 16:11:15 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_uphex_pf(unsigned long long n, int i)
{
	if (n >= 16)
		i = ft_uphex_pf(n / 16, i);
	i = ft_putchar_pf(UP_HEX[n % 16], i);
	return (i);
}
