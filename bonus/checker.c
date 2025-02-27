/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:27:07 by otzarwal          #+#    #+#             */
/*   Updated: 2025/02/27 02:44:20 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "./get_next_line/get_next_line.h"


int main(int ac, char **av)
{
    t_stack *a;
    t_stack *b;
    char *all_arg;
    char **split_arg;

    all_arg = NULL;
    if (ac < 2)
        return (0);
    init_stack(&a, &b);
    check_all_av(av, ac);
    join_argv(av + 1, &all_arg);
    split_arg = ft_split(all_arg, ' ');
    is_only_digit(split_arg, all_arg);
    is_deferent(&a, split_arg, all_arg);
    if(is_sorted(a) == -1)
        return (0);
    sort_all(&a, &b);
    sort_to_a(&a, &b);
    ft_clear(split_arg);
    free(all_arg);
    ft_clear_lst(&a);
    
    return (0);
}
