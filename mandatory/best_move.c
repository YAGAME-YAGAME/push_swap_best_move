/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagame <yagame@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 16:07:11 by otzarwal          #+#    #+#             */
/*   Updated: 2025/02/24 01:12:46 by yagame           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/push_swap.h"

t_stack *find_small(t_stack *a)
{
    t_stack *small;

    small = a;
    while(a)
    {
        if (small->data > a->data)
            small = a;
        a = a->next;
    }
    return (small);
}
    

void    find_targer(t_stack **a, t_stack **b)
{
    t_stack *tmp_a;
    t_stack *tmp_b;
    
    tmp_a = *a;
    tmp_b = *b;
    while(tmp_b)
    {
        tmp_b->target = tmp_a;
        while(tmp_a)
        {
            if (tmp_b->data < tmp_a->data)
            {
                if (tmp_a->data < tmp_b->target->data ||
                     tmp_b->data > tmp_b->target->data)
                    tmp_b->target = tmp_a;
            }
            tmp_a = tmp_a->next;
        }
        if (tmp_b->data > tmp_b->target->data)
            tmp_b->target = find_small(*a);
        
        tmp_a = *a;
        tmp_b = tmp_b->next;
    }
}

void    find_index(t_stack **a, t_stack **b)
{
    t_stack *tmp;
    int index;
    int lst_size_a;
    int lst_size_b;
    
    lst_size_a = ft_lstsize(*a) / 2;
    lst_size_b = ft_lstsize(*b) / 2;
    index = 0;
    tmp = *a;
    while(tmp)
    {
        tmp->index = index;
        if(tmp->index <= lst_size_a)
            tmp->pos = 1;
        else
            tmp->pos = 0;
        index++;
        tmp = tmp->next;
    }
    
    tmp = *b;
    index = 0;
    while(tmp)
    {
        tmp->index = index;
        if(tmp->index <= lst_size_b)
            tmp->pos = 1;
        else
            tmp->pos = 0;
        index++;
        tmp = tmp->next;
    }
}

int how_moves(t_stack *st, t_stack *tmp)
{
    int count;
    int many;

    count = 0;
    many = tmp->index;
    if(many <= ft_lstsize(st) / 2)
    {
        while(many--)
            count++;
    }
    else
    {
        while(many++ < ft_lstsize(st))
            count ++;
    }
    return (count);
}

int ft_get_move(t_stack **a, t_stack **b, t_stack *tmp)
{
    int len_a;
    int len_b;

    len_a = ft_lstsize(*a) - tmp->target->index;
    len_b = ft_lstsize(*b) - tmp->index;
    if(tmp->pos == 1 && tmp->target->pos == 1)
        if(tmp->index >= tmp->target->index)
            return (tmp->index);
        else
            return (tmp->target->index);
    else if(tmp->pos == 0 && tmp->target->pos == 0)
         if(len_b  >=  len_a)
            return (len_b );
        else
            return (len_a);
    else if(tmp->pos == 1 && tmp->target->pos == 0)
         return (len_a + tmp->index);
    else
         return (len_b + tmp->target->index);
        
    
}

void find_move(t_stack **a, t_stack **b)
{
    t_stack *tmp_b;
    
    tmp_b = *b;
    while(tmp_b)
    {
        tmp_b->moves = ft_get_move(a, b, tmp_b);
        tmp_b = tmp_b->next;
    }
    
    
}
t_stack *find_min_move(t_stack *st)
{
    t_stack *min;

    min = st;
    while(st)
    {
        if (min->moves > st->moves)
        {
            min = st;
        }
        st = st->next;
    }
    return (min);
}

void ready_to_push(t_stack **a, t_stack **b)
{
    t_stack *min_move;
    int len_a;
    int len_b;

    min_move = find_min_move(*b);
    if(min_move->pos == 1 && min_move->target->pos == 1)
    {
        if(min_move->index >= min_move->target->index)
            move_to_top_1(a, b, min_move, 1);
        else
            move_to_top_1(a, b, min_move, 0);
    } 
    else if (min_move->pos == 0 && min_move->target->pos == 0)
    {
        len_a = ft_lstsize(*a) - min_move->target->index;
        len_b = ft_lstsize(*b) - min_move->index;
        if(len_a >= len_b)
                move_to_top_0(a, b, len_b, (len_a - len_b), 1);
        else
                move_to_top_0(a, b, len_a, (len_b - len_a), 0);
    } 
    else 
            move_to_top_0_1(a, b, min_move);  
}

void    sort_to_a(t_stack **a, t_stack **b)
{
    t_stack *tmp;
    
    tmp = *b;

    while(tmp)
    {
        find_targer(a, b);
        find_index(a, b);
        find_move(a, b);
        ready_to_push(a, b);
        pa(a, b);
        tmp =  *b;
    }
    find_index(a, b);
    fimish_sort(a);    
}
