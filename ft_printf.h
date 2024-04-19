/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:43:45 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/19 19:43:47 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *, ...);
int		ft_putchar_pf(char c);
int		ft_putstr_pf(const char *s);
int		ft_formatof(char type, va_list ptr);
int		ft_lowhex_pf(int i);
int		ft_uphex_pf(int i);
int		ft_putnbr_pf(int n);

#endif