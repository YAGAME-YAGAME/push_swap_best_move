/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:27:07 by otzarwal          #+#    #+#             */
/*   Updated: 2025/02/08 13:00:44 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void ft_clear(t_stack **a)
{
    t_stack *tmp;
    if(!a || !*a)
        return ;
    while(a)
    {
        tmp = (*a)->next;
        free(*a);
        printf("data: %d\n", (*a)->data);
        (*a) = tmp;
    }
}
void    init_stack(t_stack **a, t_stack **b)
{
    *a = NULL;
    *b = NULL;
}

void ll()
{
    system("leaks -q push_swap");
}
int main(int ac, char **av)
{
    // atexit(ll);
    t_stack *a;
    t_stack *b;
    char *all_arg;
    char **split_arg;

    all_arg = NULL;

    if (ac < 2)
        return (0);
    init_stack(&a, &b);
    join_argv(av + 1, &all_arg);
    split_arg = ft_split(all_arg, ' ');
    if(!check_is_only_digit(ft_split(all_arg, ' ')))
        ft_printf("the arguments are not valid \n");
    if (!check_duplicate(&a, split_arg))
    {
        ft_printf("\033[;31mthere are duplicates in the arguments\033[;31m \n");   
        alloc_free(split_arg, count_word(all_arg, ' '));
    }
    ft_index(&a);
    if (ft_lstsize(a) <= 5)
    {
        ft_sort(&a, &b);
    }
    // while(a)
    // {
    //     printf("data: %d index: %d\n", a->data, a->index);
    //     a = a->next;
    // }
    
    
    
    
 
    
    return (0);
}