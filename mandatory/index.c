/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 16:16:42 by yagame            #+#    #+#             */
/*   Updated: 2025/02/08 13:05:23 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void ft_index(t_stack **a)
{
    t_stack *tmp;
    t_stack *tmp2;
    (*a)->index = 0;
    
    tmp = *a;
    tmp2 = *a;

    while(tmp)
    {
        while(tmp2)
        {
            if(tmp->data > tmp2->data)
            {
                tmp->index++;
            }
            tmp2 = tmp2->next;
        }
        tmp2 = *a;
        tmp = tmp->next;
    }

}