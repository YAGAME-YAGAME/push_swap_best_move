/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 19:07:10 by otzarwal          #+#    #+#             */
/*   Updated: 2025/02/21 22:58:50 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void ft_set_min_target(t_stack *tmp_b, t_stack **a)
{
    int min;

    t_stack *tmp;

    tmp = *a;
    min = (*a)->data;
    while (tmp)
    {
        if (min >  tmp->data)
        {
            min = tmp->data;
            *tmp_b->target = min;
        }
        tmp = tmp->next;
    }
    
}

void    find_targer(t_stack **a, t_stack **b)
{
    t_stack *tmp_a;
    t_stack *tmp_b;
    
    tmp_a = *a;
    tmp_b = *b;
    while(tmp_b)
    {
        tmp_b->target = NULL;
        while(tmp_a)
        {
            if (tmp_b->data < tmp_a->data)
            {
                if (tmp_b->target == NULL)
                    tmp_b->target = &tmp_a->data;
                else if (tmp_a->data < *tmp_b->target)
                    tmp_b->target = &tmp_a->data;
            }
            tmp_a = tmp_a->next;
        }
        if (tmp_b->target == NULL)
            ft_set_min_target(tmp_b, a); //set tmp_b node to point on the smallest number in stack_a
        tmp_a = *a;
        tmp_b = tmp_b->next;
    }
}

void    sort_to_a(t_stack **a, t_stack **b)
{
    find_targer(a, b);
}
