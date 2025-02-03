/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:27:07 by otzarwal          #+#    #+#             */
/*   Updated: 2025/02/03 13:14:41 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"


int main(int ac, char **av)
{
    t_stack *a;
    t_stack *b;
    static char *all_arg;

    all_arg = NULL;

    if (ac < 2)
        return (0);
    a = NULL;
    b = NULL;
    
    join_argv(av + 1, &all_arg);
    
    if(!check_is_only_digit(ft_split(all_arg, ' ')))
        ft_printf("the arguments are not only digits\n");
    
    return (0);
}