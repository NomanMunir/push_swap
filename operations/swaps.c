#include "../push_swap.h"

void sa(t_stack **stack_a)
{
	t_stack *tmp;

	if (!(*stack_a) || !(*stack_a)->next)
		return ;
	tmp = (*stack_a)->next;
	(*stack_a)->next = tmp->next;
	tmp->next = *stack_a;
	*stack_a = tmp;
	ft_putstr_fd("sa\n", 2);
}

void sb(t_stack **stack_b)
{
	t_stack *tmp;

	if (!(*stack_b) || !(*stack_b)->next)
		return ;
	tmp = (*stack_b)->next;
	(*stack_b)->next = tmp->next;
	tmp->next = *stack_b;
	*stack_b = tmp;
	ft_putstr_fd("sb\n", 2);
}

void ss(t_stack **stack_a, t_stack **stack_b)
{
	sa(stack_a);
	sb(stack_b);
	ft_putstr_fd("ss\n", 2);
}
