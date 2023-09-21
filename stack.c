#include "push_swap.h"

static void	add_node(t_stack **stk, int value)
{
	t_stack	*last;
	t_stack	*node;

	if (!stk)
		return ;
	node = malloc(sizeof(t_stack));
	if (!node)
		return ;
	node->value = value;
	node->next = NULL;
	if (!(*stk))
		{
			*stk = node;
			node->prev = NULL;
		}
	else
	{
		last = lastnode(*stk);
		last->next = node;
		node->prev = last;
	}
}

int is_duplicate(t_stack **stk)
{
	t_stack *tmp;
	t_stack *tmp2;

	tmp = *stk;
	while (tmp)
	{
		tmp2 = tmp->next;
		while (tmp2)
		{
			if (tmp->value == tmp2->value)
				return (1);
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
	return (0);
}

void	init_stack(char **args, t_stack **stk_a)
{
	int 	i;
	int 	error;
	long	temp;

	error = 0;
	i = 0;
	temp = 0;
	while (args[i])
	{
		temp = ft_atol(args[i], &error);
		if (error == 1)
			return (ft_free_nodes(stk_a), error_handling());
		add_node(stk_a, (int)temp);
		i++;
	}
	if (is_duplicate(stk_a))
		return (ft_free_nodes(stk_a), error_handling());
}
