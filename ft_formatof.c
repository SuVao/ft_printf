/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formatof.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:40:54 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/19 13:15:30 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formatof(char type, va_list ptr)
{
	int	i;

	i = 0;
	if (type == 'c')
		i += ft_putchar_pf(va_arg(ptr, int));
	else if (type == 's')
		i += ft_putstr_pf(va_arg(ptr, char *));
/*  	else if (type == 'd')
		i += ft_putnbr_pf(va_arg(ptr, int));
	else if (type == 'p')
		i += ft_putptr_pf(va_arg(ptr, int));
	else if (type == 'i')
		i += ft_nbrbase_pf(va_arg(ptr, int));
	else if (type == 'u')
		i += ft_unsigint_pf(va_arg(ptr, unsigned int)); */
	else if (type == 'x')
		i += ft_lowhex_pf(va_arg(ptr, int));
	else if (type == 'X')
		i += ft_uphex_pf(va_arg(ptr, int));
/* 	else if (type == '%')
		i += ft_putper_pf(va_arg(ptr, int));  */
	else
		i += write(1, &type, 1);
	return (i);
}