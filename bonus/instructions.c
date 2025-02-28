/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagame <yagame@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:42:48 by yagame            #+#    #+#             */
/*   Updated: 2025/02/28 01:31:02 by yagame           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/push_swap_bonus.h"
#include "./get_line/get_next_line.h"


int     check_instruction(t_stack **a, t_stack **b, char *instruction)
{
    if (ft_strncmp("pa", instruction, 2) == 0)
        pa(a, b);
    else if (ft_strncmp("pb", instruction, 2) == 0)
        pb(a, b);
    else if (ft_strncmp("ra", instruction, 2) == 0)
        ra(a);
    else if (ft_strncmp("rb", instruction, 2) == 0)
        rb(b);
    else if (ft_strncmp("rr", instruction, 2) == 0)
        rr(a, b);
    else if (ft_strncmp("rrr", instruction, 3) == 0)
        rrr(a, b);
    else if (ft_strncmp("rra", instruction, 3) == 0)
        rra(a);
    else if (ft_strncmp("rrb", instruction, 3) == 0)
        rrb(b);
    else if (ft_strncmp("sa", instruction, 2) == 0)
        sa(a);
    else if (ft_strncmp("sb", instruction, 2) == 0)
        sb(a);
    else if (ft_strncmp("ss", instruction, 2) == 0)
        ss(a, b);
    else
        return (-1);
    return (0);
}
