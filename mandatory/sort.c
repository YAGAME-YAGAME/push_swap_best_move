/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 19:08:30 by otzarwal          #+#    #+#             */
/*   Updated: 2025/02/10 20:44:09 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int check_range(t_stack *a)
{
    int range;
    int len;
    len = ft_lstsize(a);
    if (len <= 100)
        range = 15;
    else if (len <= 200)
        range = 20;
    else
        range = 30;
    return range;
}

void    sort_all(t_stack **a, t_stack **b)
{
    t_stack *tmp;
    int range;
    int index;
    int len;
    
    len = ft_lstsize(*a);
    index = 0;
    range = check_range(*a);
    tmp = *a;
    while (len)
    {
        if (tmp->index >= index && tmp->index < index + range)
        {
            index++;
            range++;
            pb(a, b);
        }
        else if (tmp->index < index)
        {
            pb(a, b);
            rb(b);
        }
        else
            ra(a);
        
        len--;
    }
    
}