#include "../push_swap.h"

static void rotate(t_stack **stack)
{
	t_stack *tmp;
	t_stack *last;

	if (!(*stack) || !(*stack)->next)
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	last = lastnode(*stack);
	last->next = tmp;
	last->next->prev = last;
	tmp->next = NULL;
}

void rb(t_stack **stack_b)
{
	rotate(stack_b);
	ft_putstr_fd("rb\n", 1);
}

void ra(t_stack **stack_a)
{
	rotate(stack_a);
	ft_putstr_fd("ra\n", 1);
}

void rr(t_stack **stack_a, t_stack **stack_b)
{
	ra(stack_a);
	rb(stack_b);
	ft_putstr_fd("rr\n", 1);
}