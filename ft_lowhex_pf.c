/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowhex_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:44:27 by pesilva-          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/04/22 15:09:05 by pesilva-         ###   ########.fr       */
=======
/*   Updated: 2024/04/22 09:22:35 by pesilva-         ###   ########.fr       */
>>>>>>> 181d1f87512fbbd725428c711855cf99e7c567e9
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lowhex_pf(unsigned long long n, int i)
{
	if (n >= 16)
<<<<<<< HEAD
	{
		i = ft_lowhex_pf(n / 16, i);
	}
	i = ft_putchar_pf(LOW_HEX[n % 16], i);
=======
		ft_lowhex_pf(n / 16, i);
	ft_putchar_pf(&LOW_HEX[i % 16], i);
>>>>>>> 181d1f87512fbbd725428c711855cf99e7c567e9
	return (i);
}
