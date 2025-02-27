/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 12:18:07 by otzarwal          #+#    #+#             */
/*   Updated: 2025/02/09 12:37:48 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../include/push_swap.h"

void sa(t_stack **lst)
{
    t_stack *tmp;

    if (!lst || !*lst || !(*lst)->next)
        return ;
    tmp = (*lst)->next;
    (*lst)->next = tmp->next;
    tmp->next = *lst;
    *lst = tmp;
    write(1, "sa\n", 3);
}