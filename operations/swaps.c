#include "../push_swap.h"

static void	swap(t_stack **head)
{
	int	len;

	len = lstsize(*head);
	if (NULL == *head || NULL == head || 1 == len)
		return ;
	*head = (*head)->next;
	(*head)->prev->prev = *head;
	(*head)->prev->next = (*head)->next;
	if ((*head)->next)
		(*head)->next->prev = (*head)->prev;
	(*head)->next = (*head)->prev;
	(*head)->prev = NULL;
}

void	sa(t_stack	**a)
{
	swap(a);
		write(1, "sa\n", 3);
}

void	sb(t_stack **b)
{
	swap(b);
		write(1, "sb\n", 3);
}

void	ss(t_stack **a, t_stack **b)
{
	swap(a);
	swap(b);
		write(1, "ss\n", 3);
}
