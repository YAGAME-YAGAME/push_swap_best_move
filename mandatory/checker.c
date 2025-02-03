/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:07:36 by otzarwal          #+#    #+#             */
/*   Updated: 2025/02/03 13:14:52 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void    join_argv(char **av, char **all_arg)
{
    while(*av)
    {
        *all_arg = ft_strjoin(*all_arg, *av);
        if (*(av + 1))
            *all_arg = ft_strjoin(*all_arg, " ");
        av++;
    }
}

int    check_is_only_digit(char **arg)
{
    while(*arg)
    {
        ft_printf("arg = %s\n", *arg);
        arg++;
    }
    return (1);
}