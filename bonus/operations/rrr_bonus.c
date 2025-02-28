/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagame <yagame@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 12:17:27 by otzarwal          #+#    #+#             */
/*   Updated: 2025/02/28 01:43:48 by yagame           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap_bonus.h"

void rrr(t_stack **a, t_stack **b)
{
    t_stack *tmp;
    t_stack *tmp2;


    if (!a || !*a || !(*a)->next)
        return ;
    tmp = *a;
    while (tmp->next->next)
        tmp = tmp->next;
    tmp2 = tmp->next;
    tmp->next = NULL;
    tmp2->next = *a;
    *a = tmp2;

    if (!b || !*b || !(*b)->next)
        return ;
    tmp = *b;
    while (tmp->next->next)
        tmp = tmp->next;
    tmp2 = tmp->next;
    tmp->next = NULL;
    tmp2->next = *b;
    *b = tmp2;
}