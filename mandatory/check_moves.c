/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 09:42:52 by otzarwal          #+#    #+#             */
/*   Updated: 2025/02/10 18:37:35 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int    check_sort(t_stack **a)
{
    
    t_stack *tmp;
    tmp = *a;
    while (tmp && tmp->next) {
        if (tmp->index > tmp->next->index)
            return 0;  // Not sorted
        tmp = tmp->next;
    }
    return 1;
}

void   ft_sort_3(t_stack **a)
{
    
    int first;
    int second;
    int third;
    
    first = (*a)->index;
    second = (*a)->next->index;
    third = (*a)->next->next->index;

    if (first > second && first > third) 
        ra(a);
    if (first < second && second > third) 
        rra(a);
    if ((*a)->index > (*a)->next->index) 
        sa(a);
}



void    p_big(t_stack **a, t_stack **b)
{
    t_stack *tmp;
    t_stack *big;
    (void)b;
    
    tmp = *a;
    big = *a;
    while(tmp)
    {
        if (tmp->index > big->index)
            big = tmp;
        tmp = tmp->next;
    }
    if (big->index < ft_lstsize(*a) / 2)
    {
        while ((*a)->data != big->data)
            ra(a);
    }
    else
    {
        while ((*a)->data != big->data)
            rra(a);
    }
}
void ft_sort_4(t_stack **a, t_stack **b)
{
    p_big(a, b);
    pb(a, b);
    ft_sort_3(a);
    pa(a, b);
    ra(a);
}

int    check_moves(t_stack **a, t_stack **b)
{
    int check;
    (void)b;
    check = 1;
    check = check_sort(a);
    if (check == 1)
        return (1);
    if (ft_lstsize(*a) == 3)
        ft_sort_3(a);
    else if (ft_lstsize(*a) == 4)
    {
        ft_sort_4(a, b);
    }
    else if (ft_lstsize(*a) == 5)
    {
        p_big(a, b);
        pb(a, b);
        ft_sort_4(a, b);
        pa(a, b);
        ra(a);
       
    }

    return check;
}