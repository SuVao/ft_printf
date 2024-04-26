/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:46:39 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/26 17:09:24 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_pf(const char *s, int i)
{
	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (i + 6);
	}
	while (*s)
	{
		i = ft_putchar_pf((int)*s, i);
		s++;
	}
	return (i);
}

/* int	main()
{
	char	s[] = "PO CARALHO!";
	ft_putstr_pf(s);
	return (0);
} */