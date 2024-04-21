/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formatof.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:53:35 by pesilva-          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/04/20 21:08:14 by pesilva-         ###   ########.fr       */
=======
/*   Updated: 2024/04/21 16:47:57 by pesilva-         ###   ########.fr       */
>>>>>>> b00770a (100% done)
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_formatof(char type, va_list ptr)
{
	int i;

	i = 0;
	if (type == 'c')
		i += ft_putchar_pf(va_arg(ptr, int));
	else if (type == 's')
<<<<<<< HEAD
		i += ft_putstr_pf(va_arg(ptr, char *));
=======
		i += ft_putstr_pf(va_arg(ptr, const char *));
>>>>>>> b00770a (100% done)
	else if (type == 'd' || type == 'i')
		i += ft_putnbr_pf(va_arg(ptr, int));
	else if (type == 'p')
		i += ft_putptr_pf(va_arg(ptr, void *));
	else if (type == 'u')
<<<<<<< HEAD
	{
		i += ft_unsigint_pf(va_arg(ptr, unsigned int));
		printf("\ni: %d\n", i);
	}
=======
		i += ft_unsigint_pf(va_arg(ptr, unsigned int));
>>>>>>> b00770a (100% done)
	else if (type == 'x')
		i += ft_lowhex_pf(va_arg(ptr, int));
	else if (type == 'X')
		i += ft_uphex_pf(va_arg(ptr, int));
	else if (type == '%')
		i += write(1, "%", 1);
	else
		i += write(1, &type, 1);
	return (i);
}