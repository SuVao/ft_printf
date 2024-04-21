/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:56:07 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/21 17:35:56 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

# define LOW_HEX "0123456789abcdef"
# define UP_HEX "0123456789ABCDEF"
# define DEC_BASE "0123456789"

int		ft_printf(const char *s, ...);
int		ft_putchar_pf(char c);
int		ft_putstr_pf(const char *s);
int		ft_formatof(char type, va_list ptr);
int		ft_lowhex_pf(int i);
int		ft_uphex_pf(int i);
int		ft_putnbr_pf(int i);
int		ft_putptr_pf(void *ptr);
int		ft_unsigint_pf(unsigned int i);

#endif