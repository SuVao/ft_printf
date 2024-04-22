/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formatof.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:53:35 by pesilva-          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/04/22 15:10:20 by pesilva-         ###   ########.fr       */
=======
/*   Updated: 2024/04/22 09:21:49 by pesilva-         ###   ########.fr       */
>>>>>>> 181d1f87512fbbd725428c711855cf99e7c567e9
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formatof(char type, va_list ptr, int i)
{
	if (type == 'c')
		i = ft_putchar_pf(va_arg(ptr, int), i);
	else if (type == 's')
		i = ft_putstr_pf(va_arg(ptr, const char *), i);
	else if (type == 'd' || type == 'i')
		i = ft_putnbr_pf(va_arg(ptr, int), i);
	else if (type == 'p')
		i = ft_putptr_pf(va_arg(ptr, void *), i);
	else if (type == 'u')
		i = ft_unsigint_pf(va_arg(ptr, unsigned int), i);
	else if (type == 'x')
		i = ft_lowhex_pf(va_arg(ptr, unsigned long long), i);
	else if (type == 'X')
		i = ft_uphex_pf(va_arg(ptr, unsigned long long), i);
	else if (type == '%')
	{
<<<<<<< HEAD
		write(1, "%", 1);
		i++;
	}
	else
	{
		write(1, &type, 1);
		i++;
=======
		i++;
		write(1, "%", 1);
	}
	else
	{
		i++;
		write(1, &type, 1);
>>>>>>> 181d1f87512fbbd725428c711855cf99e7c567e9
	}
	return (i);
}
