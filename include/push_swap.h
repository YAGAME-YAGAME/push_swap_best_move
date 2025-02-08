/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otzarwal <otzarwal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:25:11 by otzarwal          #+#    #+#             */
/*   Updated: 2025/02/08 12:00:00 by otzarwal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"



char	*ft_strjoin_2(char *s1, char *s2);
void    ft_index(t_stack **a);
void    join_argv(char **av, char **all_arg);
int     check_is_only_digit(char **arg);
int     check_duplicate(t_stack **a, char **arg);

void ft_sort(t_stack **a, t_stack **b);


// moves
void pa(t_stack **a, t_stack **b);
void pb(t_stack **a, t_stack **b);
void sa(t_stack **a);
void sb(t_stack **b);

#endif