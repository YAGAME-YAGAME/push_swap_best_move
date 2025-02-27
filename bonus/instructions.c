/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagame <yagame@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:42:48 by yagame            #+#    #+#             */
/*   Updated: 2025/02/27 21:22:13 by yagame           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/push_swap_bonus.h"
#include "./get_line/get_next_line.h"


int     check_instruction(t_stack **a, t_stack **b, char *instruction)
{
    if (ft_strncmp("pa\n", instruction, 3) == 0)
        pa(a, b);
    else if (ft_strncmp("pb\n", instruction, 3) == 0)
        pb(a, b);
    else if (ft_strncmp("ra\n", instruction, 3) == 0)
        ra(a);
    else if (ft_strncmp("rb\n", instruction, 3) == 0)
        rb(b);
    else if (ft_strncmp("rr\n", instruction, 3) == 0)
        rr(a, b);
    else if (ft_strncmp("rrr\n", instruction, 4) == 0)
        rrr(a, b);
    else if (ft_strncmp("rra\n", instruction, 4) == 0)
        rra(a);
    else if (ft_strncmp("rrb\n", instruction, 4) == 0)
        rrb(b);
    else if (ft_strncmp("sa\n", instruction, 3) == 0)
        sa(a);
    else if (ft_strncmp("sb\n", instruction, 3) == 0)
        sb(a);
    else if (ft_strncmp("ss\n", instruction, 3) == 0)
        ss(a, b);
    else
        return (-1);
    return (0);
}
