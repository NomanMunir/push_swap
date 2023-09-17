/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmunir <nmunir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:59:52 by nmunir            #+#    #+#             */
/*   Updated: 2023/09/17 17:47:00 by nmunir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "lib/libft/libft.h"
# include "lib/ft_printf/ft_printf.h"
# include <unistd.h>
# include <stdio.h>

typedef struct s_stack
{
	int			value;
	int			index;
	
	struct s_stack	*next;
}					t_stack;

void		print_stack(t_stack *stack_a);
void		check_arg(int ac, char **av);
void		error_handling(char *error);
void		ft_free(char **str);
t_stack		*create_stack(int ac, char **av, t_stack *stack_a);
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
int			min(t_stack *stack);
int			max(t_stack *stack);
void		ft_sort_3(t_stack **stk);
#endif