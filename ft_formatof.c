/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formatof.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:53:35 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/20 18:54:15 by pesilva-         ###   ########.fr       */
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
		i += ft_putstr_pf(va_arg(ptr, char *));
	else if (type == 'd' || type == 'i')
		i += ft_putnbr_pf(va_arg(ptr, int));
	else if (type == 'p')
		i += ft_putptr_pf(va_arg(ptr, void *));
	/*	else if (type == 'u')
			i += ft_unsigint_pf(va_arg(ptr, unsigned int)); */
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