/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagame <yagame@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:45:58 by yagame            #+#    #+#             */
/*   Updated: 2025/02/07 11:56:15 by yagame           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/push_swap.h"

void pa(t_stack **a, t_stack **b)
{
    t_stack *tmp;

    if (!*b)
        return ;
    tmp = *b;
    *b = (*b)->next;
    tmp->next = *a;
    *a = tmp;
}

void pb(t_stack **a, t_stack **b)
{
    t_stack *tmp;

    if (!*a)
        return ;
    tmp = *a;
    *a = (*a)->next;
    tmp->next = *b;
    *b = tmp;
}
void sa(t_stack **a)
{
    t_stack *tmp;

    if (!*a || !(*a)->next)
        return ;
    tmp = *a;
    *a = (*a)->next;
    tmp->next = (*a)->next;
    (*a)->next = tmp;
}

void sb(t_stack **b)
{
    t_stack *tmp;

    if (!*b || !(*b)->next)
        return ;
    tmp = *b;
    *b = (*b)->next;
    tmp->next = (*b)->next;
    (*b)->next = tmp;
}