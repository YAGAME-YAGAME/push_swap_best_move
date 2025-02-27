/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagame <yagame@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:27:07 by otzarwal          #+#    #+#             */
/*   Updated: 2025/02/27 21:25:40 by yagame           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap_bonus.h"
#include "./get_line/get_next_line.h"


int main(int ac, char **av)
{
    t_stack *a;
    t_stack *b;
    char *all_arg;
    char **split_arg;

    all_arg = NULL;
    if (ac < 2)
        return (0);
    // init_stack(&a, &b);
    // check_all_av(av, ac);
    // join_argv(av + 1, &all_arg);
    // split_arg = ft_split(all_arg, ' ');
    // is_only_digit(split_arg, all_arg);
    // is_deferent(&a, split_arg, all_arg);
    // if(is_sorted(a) == -1)
    //     return (0);
    char *line = get_next_line(0);
    char *tmp;
    int rd = 0;
    while(line)
    {
        tmp = line;
        if(check_instruction(&a, &b, line) == -1)
        {
            // ft_clear(split_arg);
            // free(all_arg);
            // ft_clear_lst(&a);
            printf("ko\n");
            exit(1);
        }
        line = get_next_line(0);
        free(tmp);
    }
    // if (is_sorted(a) == -1)
        printf("ok\n");
    // ft_clear(split_arg);
    // free(all_arg);
    // ft_clear_lst(&a);
    
    return (0);
}
