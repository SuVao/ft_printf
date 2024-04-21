/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowhex_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:44:27 by pesilva-          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/04/20 20:55:16 by pesilva-         ###   ########.fr       */
=======
/*   Updated: 2024/04/21 16:25:33 by pesilva-         ###   ########.fr       */
>>>>>>> b00770a (100% done)
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lowhex_pf(int i)
{
<<<<<<< HEAD
	if (i >= 16)
		ft_lowhex_pf(i / 16);
	return (write(1, &LOW_HEX[i % 16], 1));
=======
	int	count;

	count = 0;
	if (i >= 16)
		count += ft_lowhex_pf(i / 16);
	return (count += write(1, &LOW_HEX[i % 16], 1));
>>>>>>> b00770a (100% done)
}
