/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uphex_pf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:46:51 by pesilva-          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/04/20 20:55:43 by pesilva-         ###   ########.fr       */
=======
/*   Updated: 2024/04/21 16:24:47 by pesilva-         ###   ########.fr       */
>>>>>>> b00770a (100% done)
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_uphex_pf(int i)
{
<<<<<<< HEAD
	if (i >= 16)
		ft_uphex_pf(i / 16);
	return (write(1, &UP_HEX[i % 16], 1));
=======
	int	count;
	
	count = 0;
	if (i >= 16)
		count += ft_uphex_pf(i / 16);
	return (count += write(1, &UP_HEX[i % 16], 1));
>>>>>>> b00770a (100% done)
}
