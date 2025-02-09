/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 09:42:52 by otzarwal          #+#    #+#             */
/*   Updated: 2025/02/09 09:55:43 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int    check_sort(t_stack **a)
{
    t_stack *tmp;
    tmp = *a;
    while(tmp->next)
    {
        if (tmp->index > tmp->next->index)
            return (0);
        tmp = tmp->next;
    }
    return (1);
}

void   ft_sort_3(t_stack **a)
{
    if ((*a)->index > (*a)->next->index && (*a)->index < (*a)->next->next->index)
        sa(a);
    else if ((*a)->index > (*a)->next->index && (*a)->index > (*a)->next->next->index)
    {
        sa(a);
        rra(a);
    }
    else if ((*a)->index < (*a)->next->index && (*a)->index > (*a)->next->next->index)
        ra(a);
    else if ((*a)->index < (*a)->next->index && (*a)->index < (*a)->next->next->index)
    {
        sa(a);
        ra(a);
    }
}

int    check_moves(t_stack **a, t_stack **b)
{
    int check;
    (void)b;
    check = 1;
    check = check_sort(a);
    if (check == 0)
        return (0);
    if (ft_lstsize(*a))
        ft_sort_3(a);

    return check;
}