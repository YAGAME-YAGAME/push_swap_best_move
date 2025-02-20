/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 19:07:10 by otzarwal          #+#    #+#             */
/*   Updated: 2025/02/20 00:56:25 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void    find_targer(t_stack **a, t_stack **b)
{
    t_stack *tmp_a;
    t_stack *tmp_b;
    
    tmp_a = *a;
    tmp_b = *b;
    tmp_b->target = (*a)->data;
    while(tmp_b)
    {
        while(tmp_a)
        {
            if(tmp_b->data < tmp_a->data && tmp_a->data < tmp_b->target)
            {
                tmp_b->target = tmp_a->data;
            }
            tmp_a = tmp_a->next;
        }
        tmp_a = *a;
        tmp_b = tmp_b->next;
    }
}

void    sort_to_a(t_stack **a, t_stack **b)
{
    find_targer(a, b);
}
