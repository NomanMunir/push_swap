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

void sb(t_stack **stack_b, int flag)
{
	swap(*stack_b);
	if (flag == 1)
		ft_putendl_fd("sb", 1);
}

void sa(t_stack **stack_a, int flag)
{
	swap(*stack_a);
	if (flag)
		ft_putendl_fd("sa", 1);
}
void ss(t_stack **stack_a, t_stack **stack_b, int flag)
{
	swap(*stack_a);
	swap(*stack_b);
	if (flag)
		ft_putendl_fd("ss", 1);
}
