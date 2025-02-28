/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_move_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagame <yagame@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 18:49:21 by yagame            #+#    #+#             */
/*   Updated: 2025/02/28 18:50:47 by yagame           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_stack	*find_small(t_stack *a)
{
	t_stack	*small;

	small = a;
	while (a)
	{
		if (small->data > a->data)
			small = a;
		a = a->next;
	}
	return (small);
}

void	find_targer(t_stack **a, t_stack **b)
{
	t_stack	*tmp_a;
	t_stack	*tmp_b;

	tmp_a = *a;
	tmp_b = *b;
	while (tmp_b)
	{
		tmp_b->target = tmp_a;
		while (tmp_a)
		{
			if (tmp_b->data < tmp_a->data)
			{
				if (tmp_a->data < tmp_b->target->data
					|| tmp_b->data > tmp_b->target->data)
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

void	set_index_pos(t_stack *stack)
{
	t_stack	*tmp;
	int		len;
	int		index;

	tmp = stack;
	len = ft_lstsize(tmp) / 2;
	index = 0;
	while (tmp)
	{
		tmp->index = index;
		if (tmp->index <= len)
			tmp->pos = 1;
		else
			tmp->pos = 0;
		index++;
		tmp = tmp->next;
	}
}

void	find_index(t_stack **a, t_stack **b)
{
	set_index_pos(*a);
	set_index_pos(*b);
}

int	how_moves(t_stack *st, t_stack *tmp)
{
	int	count;
	int	many;

	count = 0;
	many = tmp->index;
	if (many <= ft_lstsize(st) / 2)
	{
		while (many--)
			count++;
	}
	else
	{
		while (many++ < ft_lstsize(st))
			count++;
	}
	return (count);
}
