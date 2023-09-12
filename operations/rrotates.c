#include "../push_swap.h"

void rra(t_stack **stack_a)
{
	t_stack *tmp;
	t_stack *last;

	if (!(*stack_a) || !(*stack_a)->next)
		return ;
	tmp = *stack_a;
	while (tmp->next->next)
		tmp = tmp->next;
	last = tmp->next;
	tmp->next = NULL;
	last->next = *stack_a;
	*stack_a = last;
	ft_putstr_fd("rra\n", 2);
}

void rrb(t_stack **stack_b)
{
	t_stack *tmp;
	t_stack *last;

	if (!(*stack_b) || !(*stack_b)->next)
		return ;
	tmp = *stack_b;
	while (tmp->next->next)
		tmp = tmp->next;
	last = tmp->next;
	tmp->next = NULL;
	last->next = *stack_b;
	*stack_b = last;
	ft_putstr_fd("rrb\n", 2);
}

void rrr(t_stack **stack_a, t_stack **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
	ft_putstr_fd("rrr\n", 2);
}