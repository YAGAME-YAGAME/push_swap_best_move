/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagame <yagame@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:25:11 by otzarwal          #+#    #+#             */
/*   Updated: 2025/02/27 21:14:16 by yagame           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "../bonus/get_line/get_next_line.h"
#include "../libft/libft.h"


// do instriuctio
int     check_instruction(t_stack **a, t_stack **b, char *instruction);


char	*ft_strjoin_2(char *s1, char *s2);
void    join_argv(char **av, char **all_arg);
int     check_is_only_digit(char **arg);
int     check_duplicate(t_stack **a, char **arg);

// check argument 
void        is_deferent(t_stack **a, char **split_arg, char *all_arg);
void        is_only_digit(char **split_arg, char *all_arg);

// error
void     ft_error();

// sorted
int    is_sorted(t_stack *a);


//utils
void ft_clear(char **a);
void ft_clear_lst(t_stack **a);

// moves
void pa(t_stack **a, t_stack **b);
void pb(t_stack **a, t_stack **b);
void ra(t_stack **lst);
void rb(t_stack **lst);
void rr(t_stack **a, t_stack **b);
void rra(t_stack **lst);
void rrb(t_stack **lst);
void rrr(t_stack **a, t_stack **b);
void sa(t_stack **lst);
void sb(t_stack **lst);
void ss(t_stack **a, t_stack **b);

#endif