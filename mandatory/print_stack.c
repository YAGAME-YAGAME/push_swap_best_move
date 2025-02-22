/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 20:04:44 by otzarwal          #+#    #+#             */
/*   Updated: 2025/02/22 16:46:57 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void    ft_print_stack(t_stack *a, t_stack *b)
{
    printf("stack a\n");
    while(a)
    {
        ft_printf("data -> %d  |    index-> %d   | moves-> %d   |   pos-> %d\n", a->data  , a->index, a->moves , a->pos);
        a = a->next;
    }
    printf("stack b\n");
    while(b)
    {
        ft_printf("data -> %d  |   target -> %d  |  index-> %d   | moves-> %d   | pos-> %d\n", b->data , b->target->data , b->index, b->moves, b->pos);
        b = b->next;
    }
}