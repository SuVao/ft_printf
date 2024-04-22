/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uphex_pf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:46:51 by pesilva-          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/04/22 15:11:05 by pesilva-         ###   ########.fr       */
=======
/*   Updated: 2024/04/22 09:20:46 by pesilva-         ###   ########.fr       */
>>>>>>> 181d1f87512fbbd725428c711855cf99e7c567e9
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
