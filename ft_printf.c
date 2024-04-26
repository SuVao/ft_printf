/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:55:53 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/26 08:41:22 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *s, ...)
{
	va_list	ptr;
	int		i;

	if (!s)
		return (0);
	va_start(ptr, s);
	i = 0;
	while (*s)
	{
		if (*s == '%')
			i = ft_formatof(*(++s), ptr, i);
		else
		{
			write(1, s, 1);
			i++;
		}
		s++;
	}
	va_end(ptr);
	return (i);
}

int main()
{
	// int i = 42;
	int j = 49;
	// char *str = "hello world";
	// void *ptr;

	// ptr = &i;
	// j = ft_printf("Hello, %d\n", i);
	// ft_printf("Return value: %d\n", j);
	// j = 0;
	// j = ft_printf("Hello, %c\n", 'c');
	// ft_printf("Return value: %d\n", j);
	// j = 0;
	// j = ft_printf("Hello, %s\n", "world");
	// ft_printf("Return value: %d\n", j);
	// j = 0;
	// j = ft_printf("Hello, %i\n", i);
	// ft_printf("Return value: %d\n", j);
	// j = 0;
	// j = ft_printf("Hello, %p\n", ptr);
	// ft_printf("Return value: %d\n", j);
	j = 0;
	j = ft_printf("Hello, %u\n", -12345677);
	printf("Return value: %d\n", j);
	// j = 0;
	// j = ft_printf("Hello, %x\n", 12412141515144);
	// ft_printf("Return value: %d\n", j);
	// j = 0;
	// j = ft_printf("Hello, %X\n", 12412141515144);
	// ft_printf("Return value: %d\n", j);
	// printf("<<<<<<<<<<<>>>>>>>>>>\n");
	// j = 0;
	// j = printf("Hello, %d\n", i);
	// printf("Return value: %d\n", j);
	// j = 0;
	// j = printf("Hello, %c\n", 'c');
	// printf("Return value: %d\n", j);
	// j = 0;
	// j = printf("Hello, %s\n", "world");
	// printf("Return value: %d\n", j);
	// j = 0;
	// j = printf("Hello, %i\n", i);
	// printf("Return value: %d\n", j);
	// j = 0;
	// j = printf("Hello, %p\n", ptr);
	// printf("Return value: %d\n", j);
	j = 0;
	j = printf("Hello, %u\n", -12345677);
	printf("Return value: %d\n", j);
	// j = 0;
	// j = printf("Hello, %x\n", 12412141515144);
	// printf("Return value: %d\n", j);
	// j = 0;
	// j = printf("Hello, %X\n", 12412141515144);
	// printf("Return value: %d\n", j);
}