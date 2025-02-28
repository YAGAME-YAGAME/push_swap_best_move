/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagame <yagame@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 12:38:17 by otzarwal          #+#    #+#             */
/*   Updated: 2025/02/28 01:44:00 by yagame           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap_bonus.h"

void rr(t_stack **a, t_stack **b)
{
    t_stack *tmp;
    t_stack *tmp2;

    if (!a || !*a || !(*a)->next)
        return ;
    tmp = *a;
    tmp2 = *a;
    *a = (*a)->next;
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = tmp2;
    tmp2->next = NULL;
    if (!b || !*b || !(*b)->next)
        return ;
    tmp = *b;
    tmp2 = *b;
    *b = (*b)->next;
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = tmp2;
    tmp2->next = NULL;
}