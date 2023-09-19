#include "../push_swap.h"

static void swap(t_stack **stk)
{
	t_stack *head;

	if (!(*stk) || !(*stk)->next)
		return ;
	head = *stk;
	*stk = (*stk)->next;
	(*stk)->next->prev = head;
	head->next = (*stk)->next;
	(*stk)->next = head;
	(*stk)->prev = NULL;
}

void sb(t_stack **stack_b)
{
	swap(stack_b);
	ft_putstr_fd("sb\n", 1);
}

void sa(t_stack **stack_a)
{
	swap(stack_a);
	ft_putstr_fd("sa\n", 1);
}

void ss(t_stack **stack_a, t_stack **stack_b)
{
	sa(stack_a);
	sb(stack_b);
	ft_putstr_fd("ss\n", 1);
}
