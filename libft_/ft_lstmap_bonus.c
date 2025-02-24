/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagame <yagame@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:06:04 by otzarwal          #+#    #+#             */
/*   Updated: 2025/02/04 13:19:17 by yagame           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void *edit(void *content)
// {
//     int i = 0;
//     char *s = content;
//     while(s[i])
//     {
//         if (s[i] >= 'a' && s[i] <= 'z')
//         {
//            s[i] -=  32;
//         }
//          i++;
//     }
//     return (content);
// }

// void    put_list(t_list *node)
// {
//     if (!node)
//         return ;
//     while (node)
//     {
//         printf("%s\n", (char *)node->content);
//         node = node->next;
//     }
// }

// void del_node(void *content)
// {
//     free(content);
// }

t_stack	*ft_lstmap(t_stack *lst, int (*f)(int), int (*del)(int))
{
	t_stack	*newlist;
	t_stack	*node;
	int s;

	newlist = NULL;
	if (!f || !del)
		return (newlist);
	while (lst)
	{
		s = f(lst->data);
		node = ft_lstnew(ft_strdup(s));
		if (!node)
		{
			del(s);
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, node);
		lst = lst->next;
	}
	return (newlist);
}
