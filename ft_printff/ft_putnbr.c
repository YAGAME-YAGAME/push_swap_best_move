/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:33:14 by otzarwal          #+#    #+#             */
/*   Updated: 2024/11/17 20:12:22 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long long nbr)
{
	int	len;

	len = 0;
	if (nbr < 0)
	{
		len += write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr > 9)
		len += ft_putnbr(nbr / 10);
	len += ft_putchar((nbr % 10) + 48);
	return (len);
}
