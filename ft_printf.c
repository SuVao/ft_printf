/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:55:53 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/26 17:20:38 by pesilva-         ###   ########.fr       */
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

/* int main()
{
	unsigned long long j = 0;
	
	j = ft_printf("%X", LONG_MAX);
	printf("\ncount: %llu \n", j);
	j = 0;
	j = printf("%lX", LONG_MAX);
	printf("\ncount: %llu \n", j);

	return (0);
} */

/* int main()
{
	int i = 42;
	int j = 49;

	void *ptr;

	ptr = &i;
	j = ft_printf("Hello, %d\n", INT_MIN);
	ft_printf("Return value: %d\n", j);
	j = 0;
	j = ft_printf("Hello, %d\n", INT_MAX);
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
	j = ft_printf("Hello, %u\n", -12345677);
	printf("Return value: %d\n", j);
	j = 0;
	j = ft_printf("Hello, %x\n", 124121415);
	ft_printf("Return value: %d\n", j);
	j = 0;
	j = ft_printf("Hello, %X\n", 124121415);
	ft_printf("Return value: %d\n", j);
	printf("<<<<<<<<<<<>>>>>>>>>>\n");
	j = 0;
	j = printf("Hello, %d\n", 100);
	printf("Return value: %d\n", j);
	j = 0;
	j = printf("Hello, %d\n", 101);
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
	j = printf("Hello, %u\n", -12345677);
	printf("Return value: %d\n", j);
	j = 0;
	j = printf("Hello, %x\n", 124121415);
	printf("Return value: %d\n", j);
	j = 0;
	j = printf("Hello, %X\n", 124121415);
	printf("Return value: %d\n", j);
	return (0);
} */