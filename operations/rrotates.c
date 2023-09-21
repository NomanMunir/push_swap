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

void	rra(t_stack **a, int flag)
{
	reverse_rotate(a);
	if (flag)
		ft_putendl_fd("rra", 1);
}

void	rrb(t_stack **b, int flag)
{
	reverse_rotate(b);
	if (flag)
		ft_putendl_fd("rrb", 1);
}

void	rrr(t_stack **a, t_stack **b, int flag)
{
	reverse_rotate(a);
	reverse_rotate(b);
	if (flag)
		ft_putendl_fd("rrr", 1);
}