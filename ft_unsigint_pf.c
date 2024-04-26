/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigint_pf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 19:00:06 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/20 19:00:06 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*int	nbr_len(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}*/


int	ft_unsigint_pf(unsigned int nb, int i)
{
	long	n;

	n = nb;
	if (n > 9)
		i = ft_unsigint_pf(n / 10, i);
	i = ft_putchar_pf(DEC_BASE[n % 10], i);
	return (i);
}

// int main()
// {
// 	int i;
// 	i = printf("%i\n", ft_unsigint_pf(324234, 0));
// 	printf("Return value: %d\n", i);
// }