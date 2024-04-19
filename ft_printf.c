/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:12:12 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/19 13:49:56 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *s, ...)
{
	va_list	ptr;
	int		i;

	va_start(ptr, s);
	i = 0;
	while (*s)
	{
		if (*s == '%')
			i += ft_formatof(*(++s), ptr);
		else
			i += write(1, s, 1);
		s++;
	}
	va_end(ptr);
	return (i);
}

int main()
{
	int	i = 0;

	i = ft_printf("ola caralho %c \n", '5');
	printf("contagem de caracteres %d \n", i);

	i = 0;
	i = printf("ola caralho %c \n", '5');
	printf("contagem de caracteres %d \n", i);
	return (0);
}