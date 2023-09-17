#include "push_swap.h"

t_stack *add_node(t_stack *stack_a, int value)
{
	t_stack *new_node;
	t_stack *tmp;

	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->next = NULL;
	if (!stack_a)
		stack_a = new_node;
	else
	{
		tmp = stack_a;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new_node;
	}
	return (stack_a);
}

t_stack *create_stack(int ac, char **av, t_stack *stack_a)
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
				stack_a = add_node(stack_a, ft_atoi(av[1] + i));
				while (av[1][i] != ' ' && av[1][i])
					i++;
			}
		}
	}
	else
	{
		while (av[i])
		{
			stack_a = add_node(stack_a, ft_atoi(av[i]));
			i++;
		}
	}
	return (stack_a);
}
