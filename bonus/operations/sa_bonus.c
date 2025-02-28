/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagame <yagame@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 12:18:07 by otzarwal          #+#    #+#             */
/*   Updated: 2025/02/28 17:48:18 by yagame           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../include/push_swap_bonus.h"

void sa(t_stack **lst)
{
    t_stack *tmp;

    if (!lst || !*lst || !(*lst)->next)
        return ;
    tmp = (*lst)->next;
    
    (*lst)->next = tmp->next;
    tmp->next = *lst;
    *lst = tmp;
}