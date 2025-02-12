/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 19:08:30 by otzarwal          #+#    #+#             */
/*   Updated: 2025/02/12 19:48:41 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
int get_index(t_stack *b, int index)
{
    t_stack *tmp;
    int i;
    
    i = 0;
    tmp = b;
    while (tmp)
    {
        if (tmp->index == index)
            return (i);
        tmp = tmp->next;
        i++;
    }
    return (0);
}
void    p_big_a(t_stack **b)
{
    t_stack *tmp;
    t_stack *big;
    int index;
    int i;
    
    i = 0;
    big = *b;
    tmp = *b;
    while(tmp)
    {
        if (tmp->index > big->index)
            big = tmp;
        tmp = tmp->next;
        i++;
    }
    index = get_index(*b, big->index);
    if (index <= ft_lstsize(*b) / 2)
    {
        while (index--)
            rb(b);
    }
    else
    {
        while (index++ < ft_lstsize(*b))
            rrb(b);
    }
}

void sort_b_to_a(t_stack **a, t_stack **b)
{
    p_big_a(b);
    pa(a, b);

}

void    sort_all(t_stack **a, t_stack **b)
{
    t_stack *tmp;
    int range;
    int index;
    int len;
    
    len = ft_lstsize(*a);
    index = 0;
    range = ft_lstsize(*a) * 0.048 + 10;
    tmp = *a;
    while (len--)
    {
        if (tmp->index >= index && tmp->index <= range)
        {
            index++;
            range++;
            pb(a, b);
        }
        else if (tmp->index < index)
        {
            pb(a, b);
            rb(b);
            index++;
            range++;
        }
        else if (tmp->index > range)
        {
            ra(a);
            len++;
        }
        tmp = *a;
        
        
    }
    
    while (*b)
    {
        /* code */
        sort_b_to_a(a, b);
    }
    
}