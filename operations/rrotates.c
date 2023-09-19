#include "../push_swap.h"

static void	rotate(t_stack **stack)
{
	t_stack *last;

	if (!(*stack) || !(*stack)->next)
		return ;

	last = lastnode(*stack);
	last->prev->next = NULL;
	last->next = *stack;
	last->prev = NULL;
	(*stack)->prev = last;
	*stack = last;
}

void rrb(t_stack **stack_b)
{
	rotate(stack_b);
	ft_putstr_fd("rrb\n", 1);
}

void rra(t_stack **stack_a)
{
	rotate(stack_a);
	ft_putstr_fd("rra\n", 1);
}

void rrr(t_stack **stack_a, t_stack **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
	ft_putstr_fd("rrr\n", 1);
}