#include "../push_swap.h"

static void push(t_stack **d, t_stack **s)
{
	t_stack *tmp;

	if (!*s)
		return ;
	tmp = *s;
	*s = (*s)->next;
	if (*s)
		(*s)->prev = NULL;
	if (!(*d))
	{
		*d = tmp;
		(*d)->next = NULL;
		(*d)->prev = NULL;
	}
	else
	{
		tmp->next = *d;
		(*d)->prev = tmp;
		*d = tmp;
	}
}

void pb(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_b, stack_a);
	ft_putstr_fd("pb\n", 1);
}

void pa(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_a, stack_b);
	ft_putstr_fd("pa\n", 1);
}
