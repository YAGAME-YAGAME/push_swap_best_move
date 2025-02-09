/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 09:42:52 by otzarwal          #+#    #+#             */
/*   Updated: 2025/02/09 20:24:06 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int    check_sort(t_stack **a)
{
    t_stack *tmp;
    t_stack *tmp2;
    tmp = *a;
    while(tmp->next)
    {
        tmp2 = tmp->next;
        while (tmp2->next)
        {
            if (tmp->data > tmp2->next->data)
                return (0);
            tmp2 = tmp2->next;
        }
        tmp = tmp->next;
    }
    return (1);
}

void   ft_sort_3(t_stack **a)
{
    t_stack *tmp;
    tmp = *a;
    
    if (tmp->index > tmp->next->index  && tmp->next->index < tmp->next->next->index)
        ra(a);
    // if (tmp->next->index > tmp->next->next->index)
    //     rra(&tmp);
    // if (tmp->index > tmp->next->next->index)
    //     rra(&tmp);
    // if (tmp->index > tmp->next->index )
    //     sa(&tmp);
}

int    check_moves(t_stack **a, t_stack **b)
{
    int check;
    (void)b;
    check = 1;
    check = check_sort(a);
    if (check == 1)
        return (1);
    if (ft_lstsize(*a) == 3)
        ft_sort_3(a);
    printf("data: %d\n", (*a)->data);
    // printf("data: %d\n", (*a)->next->data);
    // printf("data: %d\n", (*a)->next->next->data);

    return check;
}