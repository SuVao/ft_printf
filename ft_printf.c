/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2024/04/19 19:46:15 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/19 21:47:08 by pesilva-         ###   ########.fr       */
=======
/*   Created: 2024/04/18 14:12:12 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/20 17:26:43 by pesilva-         ###   ########.fr       */
>>>>>>> ec3c761 (putnbr)
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
<<<<<<< HEAD
	int	i = 0;
	void	*ptr;

	ptr = &i;
	i = ft_printf("ola caralho %p \n", ptr);
	printf("contagem de caracteres %d \n", i);
=======
	int j = 0;
	int i = 0;
	void *ptr;
>>>>>>> ec3c761 (putnbr)

	ptr = &j;
	i = ft_printf("%p \n", ptr); 
	ft_printf("\n %d \n", i);
	
	i = 0;
<<<<<<< HEAD
	i = printf("ola caralho %p \n", ptr);
	printf("contagem de caracteres %d \n", i);
=======
	i = printf("%p \n", ptr);
	printf("\n %d \n", i);
>>>>>>> ec3c761 (putnbr)
	return (0);
}