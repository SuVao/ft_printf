/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:55:53 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/21 10:23:00 by pesilva-         ###   ########.fr       */
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
	void *ptr;

	ptr = &i;
	j = ft_printf("Hello, %d\n", i);
	ft_printf("Return value: %d\n", j);
	j = 0;
	j = ft_printf("Hello, %c\n", 'c');
	ft_printf("Return value: %d\n", j);
	j = 0;
	j = ft_printf("Hello, %s\n", "world");
	ft_printf("Return value: %d\n", j);
	j = 0;
	j = ft_printf("Hello, %i\n", i);
	ft_printf("Return value: %d\n", j);
	j = 0;
	j = ft_printf("Hello, %p\n", ptr);
	ft_printf("Return value: %d\n", j);
	j = 0;
	j = ft_printf("Hello, %u\n", -1);
	printf("Return value: %d\n", j);
	j = 0;
	j = ft_printf("Hello, %x\n", 42);
	ft_printf("Return value: %d\n", j);
	j = 0;
	j = ft_printf("Hello, %X\n", 42);
	ft_printf("Return value: %d\n", j);
	printf("<<<<<<<<<<<>>>>>>>>>>\n");
	j = 0;
	j = printf("Hello, %d\n", i);
	printf("Return value: %d\n", j);
	j = 0;
	j = printf("Hello, %c\n", 'c');
	printf("Return value: %d\n", j);
	j = 0;
	j = printf("Hello, %s\n", "world");
	printf("Return value: %d\n", j);
	j = 0;
	j = printf("Hello, %i\n", i);
	printf("Return value: %d\n", j);
	j = 0;
	j = printf("Hello, %p\n", ptr);
	printf("Return value: %d\n", j);
	j = 0;
	j = printf("Hello, %u\n", -1);
	printf("Return value: %d\n", j);
	j = 0;
	j = printf("Hello, %x\n", 42);
	printf("Return value: %d\n", j);
	j = 0;
	j = printf("Hello, %X\n", 42);
	printf("Return value: %d\n", j);
}