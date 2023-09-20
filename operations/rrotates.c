#include "../push_swap.h"

static void	reverse_rotate(t_stack **stack)
{
	t_stack	*last;

	if (!*stack || !stack || lstsize(*stack) == 1)
		return ;
	last = lastnode(*stack);
	last->prev->next = NULL;
	last->next = *stack;
	*stack = last;
	last->next->prev = last;
}

void	rra(t_stack **a)
{
	reverse_rotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	reverse_rotate(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	write(1, "rrr\n", 4);
}