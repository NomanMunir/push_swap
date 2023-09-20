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

void	init_stack(char **args, t_stack **stk_a)
{
	int i;

	i = 0;
	while (args[i])
	{
		add_node(stk_a, ft_atol(args[i]));
		i++;
	}
	ft_free(args);
}
