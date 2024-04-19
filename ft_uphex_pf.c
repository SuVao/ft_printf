/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uphex_pf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:46:51 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/19 19:46:53 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_uphex_pf(int i)
{
	char	*str;

	str = "0123456789ABCDEF";
	if (i >= 16)
		ft_uphex_pf(i / 16);
	return (write(1, &str[i % 16], 1));
}
