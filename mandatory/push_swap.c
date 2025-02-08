/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:27:07 by otzarwal          #+#    #+#             */
/*   Updated: 2025/02/08 09:59:11 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

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
    a = NULL;
    b = NULL;
    
    join_argv(av + 1, &all_arg);
    
    split_arg = ft_split(all_arg, ' ');
    
    if(!check_is_only_digit(ft_split(all_arg, ' ')))
        ft_printf("the arguments are not valid \n");
    if (!check_duplicate(&a, split_arg))
    {
        // ft_lstclear(&a, free);
        // free(all_arg);
        // alloc_free(split_arg, count_word(all_arg, ' '));
        ft_printf("there are duplicates in the arguments \n");    
    }
    
    // ft_index(&a);
    while(a)
    {
        ft_printf("data: %d index: %d\n", a->data, a->index);
        a = a->next;
    }
    return (0);
}