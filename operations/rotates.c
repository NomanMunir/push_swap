#include "../push_swap.h"

void ra(t_stack **stack_a)
{
	t_stack *tmp;
	t_stack *last;

	if (!(*stack_a) || !(*stack_a)->next)
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	last = *stack_a;
	while (last->next)
		last = last->next;
	last->next = tmp;
	tmp->next = NULL;
	ft_putstr_fd("ra\n", 2);
}

void rb(t_stack **stack_b)
{
	t_stack *tmp;
	t_stack *last;

	if (!(*stack_b) || !(*stack_b)->next)
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	last = *stack_b;
	while (last->next)
		last = last->next;
	last->next = tmp;
	tmp->next = NULL;
	ft_putstr_fd("rb\n", 2);
}

void rr(t_stack **stack_a, t_stack **stack_b)
{
	ra(stack_a);
	rb(stack_b);
	ft_putstr_fd("rr\n", 2);
}