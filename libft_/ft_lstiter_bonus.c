/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagame <yagame@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:52:06 by otzarwal          #+#    #+#             */
/*   Updated: 2025/02/04 00:06:42 by yagame           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_stack *lst, void (*f)(int))
{
	t_stack	*node;

	node = lst;
	if (!node || !f)
		return ;
	while (node)
	{
		f(node->data);
		node = node->next;
	}
}
