/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:14:29 by otzarwal          #+#    #+#             */
/*   Updated: 2024/11/17 14:27:23 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *fotmar, ...);

int	ft_putstr(char *str);

int	ft_puthexa(unsigned long n, char c);

int	ft_putchar(char c);

int	ft_putnbr(long long nbr);

int	check_format(va_list ar, char format);

#endif
