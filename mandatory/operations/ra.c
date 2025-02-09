/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 12:10:48 by otzarwal          #+#    #+#             */
/*   Updated: 2025/02/09 13:45:37 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void ra(t_stack **lst)
{
    t_stack *tmp;
    t_stack *tmp2;
    
    if (!lst || !*lst || !(*lst)->next)
        return ;
    tmp = *lst;
    tmp2 = *lst;
    *lst = (*lst)->next;
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = tmp2;
    tmp2->next = NULL;
    write(1, "ra\n", 3);
}