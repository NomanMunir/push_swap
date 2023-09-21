/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:59:52 by nmunir            #+#    #+#             */
/*   Updated: 2023/09/21 08:12:47 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include <stdbool.h>
# include "lib/libft/libft.h"

typedef struct s_stack
{
	int				value;
	int				current_position;
	int				final_index;
	int				push_price;
	bool			above_median;
	bool			cheapest;
	struct s_stack	*target_node;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

void		print_stack(t_stack *stack);
char		**check_arg(int ac, char **av);
void		error_handling(char *error);
void		ft_free(char **str);
void		ft_free_nodes(t_stack **stk);
void		init_stack(char **args, t_stack **stk_a);
long		ft_atol(const char *str, int *error);
void		sa(t_stack **stack_a);
void		sb(t_stack **stack_b);
void		ss(t_stack **stack_a, t_stack **stack_b);
void		rb(t_stack **stack_b);
void		ra(t_stack **stack_a);
void		pa(t_stack **stack_a, t_stack **stack_b);
void		pb(t_stack **stack_a, t_stack **stack_b);
void		rr(t_stack **stack_a, t_stack **stack_b);
void		rra(t_stack **stack_a);
void		rrb(t_stack **stack_b);
void		rrr(t_stack **stack_a, t_stack **stack_b);
t_stack		*min(t_stack *stack);
t_stack		*max(t_stack *stack);
void		ft_sort_3(t_stack **stk);
void		ft_sort_5(t_stack **stk_a, t_stack **stk_b);
void 		finish_rotations(t_stack **stk, t_stack *top, char stack_name);
int			lstsize(t_stack *stack);
t_stack		*lastnode(t_stack *stack);
void		init_nodes(t_stack *stk_a, t_stack *stk_b);
void		push_swap(t_stack **stk_a, t_stack **stk_b);
void		set_nodes_position(t_stack *stk);
void		set_cheapest(t_stack *stk_a, t_stack *stk_b);
void		set_price(t_stack *stk_a, t_stack *stk_b);
void		set_target(t_stack *stk_a, t_stack *stk_b);
void		move_nodes(t_stack **stk_a, t_stack **stk_b);
t_stack		*return_cheapest(t_stack *stack);
#endif