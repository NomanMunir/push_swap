#include "push_swap.h"

static bool	sorted(t_stack *stk)
{

	while (stk->next)
	{
		if (stk->value > stk->next->value)
			return (false);
		stk = stk->next;
	}
	return (true);
}

void	ft_sort_3(t_stack **stk)
{
	t_stack	*max_node;

	max_node = max(*stk);
	if (sorted(*stk))
		return ;
	max_node = max(*stk);
	if (*stk == max_node)
		ra(stk);
	else if ((*stk)->next == max_node)
		rra(stk);
	if ((*stk)->value > (*stk)->next->value)
		sa(stk);
}

void ft_sort_5(t_stack **stk_a, t_stack **stk_b)
{
	while(lstsize(*stk_a) > 3)
	{
		init_nodes(*stk_a, *stk_b);
		finish_rotations(stk_a, min(*stk_a), 'a');
		pb(stk_a, stk_b);
	}
}