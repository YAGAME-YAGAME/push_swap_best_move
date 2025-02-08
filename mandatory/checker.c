/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:07:36 by otzarwal          #+#    #+#             */
/*   Updated: 2025/02/08 14:32:23 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int    check_isdigit(char *s)
{
    if(*s == '-' || *s == '+')
        s++;
    while(*s && (*s >= '0' && *s <= '9'))
        s++;
    if (*s && !(*s >= '0' && *s <= '9'))
        return (0);
    return (1);
}

int duplicate(t_stack *a, int num)
{
    while(a)
    {
        if (a->data == num)
            return (0);
        a = a->next;
    }
    return (1);
}

int     check_duplicate(t_stack **a, char **arg)
{
    int i;
    int num;
    t_stack *node;
    num = 0;
    int check = 1;
    i = 0;
    while(arg[i])
    {
        num = ft_atoi(arg[i]);
        if (!duplicate(*a, num))
                check = 0;
        node = ft_lstnew(num);
        ft_lstadd_back(a, node);
        i++;
    }
    return (check);
}
void    join_argv(char **av, char **all_arg)
{
    while(*av)
    {
        *all_arg = ft_strjoin_2(*all_arg, *av);
        if (*(av + 1))
            *all_arg = ft_strjoin_2(*all_arg, " ");
        av++;
    }
}

int    check_is_only_digit(char **arg)
{
    int i;

    i = 0;
    while(arg[i])
    {
        if (!check_isdigit(arg[i]))
            return (0);
        i++;
    }
    return (1);
}

void ft_sort(t_stack **a, t_stack **b)
{
    t_stack *tmp;
    tmp = *a;
    
    while (tmp)
    {
        printf("data: %d\n", tmp->data);
        if(tmp->index >= 3)
        {
            tmp = (*a)->next;
            pb(&tmp, b);
            printf("pb\n");
        }
        else
            tmp = tmp->next;
    }
    
    printf("\n\n\nstack b\n\n\n============================\n");
    while(*b)
    {
        printf("data: %d  | index: %d\n", (*b)->data, (*b)->index);
        *b = (*b)->next;
    }
    printf("============================\nstack a\n\n");
    while(*a)
    {
        printf("data: %d  | index: %d\n", (*a)->data, (*a)->index);
        *a = (*a)->next;
    }
}