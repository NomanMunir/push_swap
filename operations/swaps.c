#include "../push_swap.h"

static void swap(t_stack *stk)
{
	int	tmp;

	if (stk && stk->next)
	{
		tmp = stk->value;
		stk->value = stk->next->value;
		stk->next->value = tmp;
	}
}

void sb(t_stack **stack_b)
{
	swap(*stack_b);
	ft_putstr_fd("sb\n", 1);
}

void sa(t_stack **stack_a)
{
	swap(*stack_a);
	ft_putstr_fd("sa\n", 1);
}
void ss(t_stack **stack_a, t_stack **stack_b)
{
	swap(*stack_a);
	swap(*stack_b);
	ft_putstr_fd("ss\n", 1);
}