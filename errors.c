#include "push_swap.h"

void error_handling()
{
	ft_putendl_fd("Error", 2);
	exit(0);
}

void ft_free(char **str)
{
	int i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void ft_free_nodes(t_stack **stk)
{
	t_stack *tmp;

	while (*stk)
	{
		tmp = *stk;
		*stk = (*stk)->next;
		free(tmp);
	}
}