/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 19:07:10 by otzarwal          #+#    #+#             */
/*   Updated: 2025/02/22 15:13:24 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"


void    find_targer(t_stack **a, t_stack **b)
{
    t_stack *tmp_a;
    t_stack *tmp_b;
    
    tmp_a = *a;
    tmp_b = *b;
    while(tmp_b)
    {
        tmp_b->target = tmp_a;
        while(tmp_a)
        {
            if (tmp_b->data < tmp_a->data)
            {
                if (tmp_a->data < tmp_b->target->data ||
                     tmp_b->data > tmp_b->target->data)
                    tmp_b->target = tmp_a;
            }
            tmp_a = tmp_a->next;
        }
        tmp_a = *a;
        tmp_b = tmp_b->next;
    }
}

void    find_index(t_stack **a, t_stack **b)
{
    t_stack *tmp;
    int index;
    
    index = 0;
    tmp = *a;
    while(tmp)
    {
        tmp->index = index;
        index++;
        tmp = tmp->next;
    }
    tmp = *b;
    index = 0;
    while(tmp)
    {
        tmp->index = index;
        index++;
        tmp = tmp->next;
    }
}

void    sort_to_a(t_stack **a, t_stack **b)
{
    find_targer(a, b);
    find_index(a, b);
}
