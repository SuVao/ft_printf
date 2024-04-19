/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrbase_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:43:18 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/19 19:43:18 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbrbase_pf(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 16)
	{
		count += ft_nbrbase_pf(n / 16);
		count += ft_putchar_pf(n % 16 + '0');
	}
	else
		count += ft_putchar_pf(n + '0');
	return (count);
}