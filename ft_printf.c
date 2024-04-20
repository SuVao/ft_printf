/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:55:53 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/20 19:59:15 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int ft_printf(const char *s, ...)
{
	va_list ptr;
	int i;

	if (!s)
		return (0);
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
	int i = 42;
	int j = 0;

	j = ft_printf("Hello, %d\n", i);
	printf("Return value: %d\n", j);
	j = 0;
}