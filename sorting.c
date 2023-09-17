#include "push_swap.h"

static int if_sorted(t_stack **stk)
{
	t_stack *tmp;

	tmp = *stk;
	while (tmp->next)
	{
		if (tmp->value > tmp->next->value)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

void	ft_sort_3(t_stack **stk)
{
	int	minn;
	int	maxn;

	minn = min(*stk);
	maxn = max(*stk);
	if (if_sorted(stk))
		return ;
	if ((*stk)->value == maxn && (*stk)->next->value == minn)
		ra(stk);
	else if ((*stk)->value == maxn && (*stk)->next->value != minn)
	{
		sa(stk);
		rra(stk);
	}
	else if ((*stk)->value != maxn && (*stk)->next->value == minn)
		sa(stk);
	else if ((*stk)->value != maxn && (*stk)->next->value != minn)
	{
		ra(stk);
		ra(stk);
	}
}