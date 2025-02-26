/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagame <yagame@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 20:04:44 by otzarwal          #+#    #+#             */
/*   Updated: 2025/02/24 22:32:05 by yagame           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void    ft_print_stack(t_stack *a, t_stack *b)
{
    printf("stack a\n");
    while(a)
    {
        printf("data -> %d  |    index-> %d   | moves-> %d   |   pos-> %d\n", a->data  , a->index, a->moves , a->pos);
        a = a->next;
    }
    printf("stack b\n");
    while(b)
    {
        printf("data -> %d  |   target -> %d  |  index-> %d   | moves-> %d   | pos-> %d\n", b->data , b->target->data , b->index, b->moves, b->pos);
        b = b->next;
    }
}