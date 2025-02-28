/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagame <yagame@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 00:04:39 by yagame            #+#    #+#             */
/*   Updated: 2025/02/24 01:14:15 by yagame           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	move_to_top_1(t_stack **a, t_stack **b, t_stack *min, int check)
{
	int	while2;
	int	while1;

	if (check) //
	{
		while2 = min->index - min->target->index; // b
		while1 = min->target->index;              // a
		while (while1--)
			rr(a, b);
		while (while2--)
			rb(b);
	}
	if (check == 0) //
	{
		while2 = min->target->index - min->index; // b
		while1 = min->index;                      // a
		while (while1--)
			rr(a, b);
		while (while2--)
			ra(a);
	}
}
void	move_to_top_0(t_stack **a, t_stack **b, int first, int secend,
		int check)
{
	if (check)
	{
		while (first--)
			rrr(a, b);
		while (secend--)
			rra(a);
	}
	if (check == 0)
	{
		while (first--)
			rrr(a, b);
		while (secend--)
			rrb(b);
	}
}

void	move_to_top_0_1(t_stack **a, t_stack **b, t_stack *obj)
{
	int	len_a;
	int	len_b;

	if (obj->pos == 1 && obj->target->pos == 0)
	{
		len_b = obj->index;
		while (len_b--)
			rb(b);
		len_a = ft_lstsize(*a) - obj->target->index;
		while (len_a--)
			rra(a);
	}
	else
	{
		len_b = ft_lstsize(*b) - obj->index;
		len_a = obj->target->index;
		while (len_b--)
			rrb(b);
		while (len_a--)
			ra(a);
	}
}
t_stack	*get_min(t_stack *a)
{
	t_stack	*tmp;
	t_stack	*min;

	tmp = a;
	min = tmp;
	while (tmp)
	{
		if (tmp->data < min->data)
			min = tmp;
		tmp = tmp->next;
	}
	return (min);
}
void	fimish_sort(t_stack **a)
{
	t_stack	*min;
	int		len;

	len = ft_lstsize(*a);
	min = get_min(*a);
	if (min->pos == 1)
	{
		while (min->index--)
			ra(a);
	}
	else
	{
		len -= min->index;
		while (len--)
			rra(a);
	}
}
