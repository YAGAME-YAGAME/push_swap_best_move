/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:41:28 by otzarwal          #+#    #+#             */
/*   Updated: 2025/02/12 21:00:19 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_skip_spaces(char c)
{
	return (c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t'
		|| c == '\v');
}

long	ft_atoi(const char *str)
{
	long long	res;
	int				q;
	int				i;

	i = 0;
	res = 0;
	q = 1;
	while (ft_skip_spaces(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			q *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		res = res * 10 + (str[i++] - '0');
	return (res *= q);
}
// #include <stdio.h>
// int main(void)
// {
//     char str[] = " 922337203685475575809";
//     printf("%d\n", ft_atoi(str));
//     printf("%d\n", atoi(str));
//     return (0);
// }
