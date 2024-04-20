/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:46:15 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/19 21:47:08 by pesilva-         ###   ########.fr       */
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
	void	*ptr;

	ptr = &i;
	i = ft_printf("ola caralho %p \n", ptr);
	printf("contagem de caracteres %d \n", i);

	i = 0;
	i = printf("ola caralho %p \n", ptr);
	printf("contagem de caracteres %d \n", i);
	return (0);
}