/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:55:53 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/29 17:07:12 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *s, ...)
{
	va_list	ptr;
	int		i;

	if (!s)
		return (-1);
	va_start(ptr, s);
	i = 0;
	while (*s)
	{
		if (*s == '%')
		{
			i = ft_formatof(*(++s), ptr, i);
		}
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
	int i = 42;
	ft_printf("hex:|%x| |%X| |%x| |%X| |%x| |%X| |%x| \n", i, i, i, i, i, 42, i);
}

/* int main()
{
	int j = 0;
	
	j = ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	printf("\ncount: %d \n", j);
	j = 0;
	j = printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	printf("\ncount: %d \n", j);

	return (0);
} */

/* int main()
{
	int i = 42;
	int j = 0;

	j = ft_printf("hex: %x%X%x%X%x%X%x%X \n", i, i, i, i, i, i, i, i);
	ft_printf("\ncount: %d \n", j);
	j = 0;
	j = printf("hex: %x%X%x%X%x%X%x%X \n", i, i, i, i, i, i, i, i);
	printf("\ncount: %d \n", j);
}
 */
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
