/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagame <yagame@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:27:07 by otzarwal          #+#    #+#             */
/*   Updated: 2025/02/24 22:15:03 by yagame           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void ft_error(void)
{
    write(2,"Error\n",6);
    exit(1);
}

void    init_stack(t_stack **a, t_stack **b)
{
    *a = NULL;
    *b = NULL;
}

int av_check(char *str)
{
    if(!str || *str == '\0')
        return (0);
    while(*str && *str == ' ')
        str++;
    if(*str == '\0' || !str)
        return (0);
    else
        return (1);
}

void check_all_av(char **av, int ac)
{
    int i;
    int check;

    i = 0;
    check = 0;
    while(i < ac )
    {
        if(NULL == *av)
            return ;
        check = av_check(*av);
        if(check == 0)
            ft_error();
    }
}
void ll()
{
    system("leaks -q push_swap");
}
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
    if(!check_is_only_digit(split_arg))
    {
        ft_clear(split_arg);
        ft_error();
        exit(0);
    }
    if (!check_duplicate(&a, split_arg))
    {
        ft_error();   
        ft_clear(split_arg);
        ft_clear_lst(&a);
        exit(0);
    }
    is_sorted(a);
    sort_all(&a, &b);
    sort_to_a(&a, &b);
    ft_print_stack(a, b);
    return (0);
}