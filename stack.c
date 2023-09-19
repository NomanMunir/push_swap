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

void	init_stack(int ac, char **av, t_stack **stk_a)
{
	int i;

	i = 1;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] == ' ')
				i++;
			else
			{
				add_node(stk_a, ft_atol(av[1] + i));
				while (av[1][i] != ' ' && av[1][i])
					i++;
			}
		}
	}
	else
	{
		while (av[i])
		{
			add_node(stk_a, ft_atol(av[i]));
			i++;
		}
	}
}
