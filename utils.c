#include "push_swap.h"

int lstsize(t_stack *stack)
{
	int i;

	i = 0;
	while (stack)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}

t_stack *lastnode(t_stack *stack)
{
	t_stack *tmp;

	tmp = stack;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}

t_stack	*return_cheapest(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack)
	{
		if (stack->cheapest)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}

void print_stack(t_stack *stack)
{

	while (stack)
	{
		// printf("current position: %d\n", stack->index);
		printf("value: %d\n", stack->value);
		// printf("above median: %d\n", stack->above_median);
		// printf("cheapest: %d\n", stack->cheapest);
		// printf("push price: %d\n", stack->push_price);
		// printf("*************************\n");
		stack = stack->next;
	}
}

t_stack	*max(t_stack *stack)
{
	int max;
	t_stack *max_node;

	max = INT_MIN;
	max_node = NULL;
	while (stack)
	{
		if (stack->value > max)
		{
			max = stack->value;
			max_node = stack;
		}
		stack = stack->next;
	}
	return (max_node);
}

t_stack *min(t_stack *stack)
{
	long			smallest;
	t_stack			*smallest_node;

	if (NULL == stack)
		return (NULL);
	smallest = LONG_MAX;
	while (stack)
	{
		if (stack->value < smallest)
		{
			smallest = stack->value;
			smallest_node = stack;
		}
		stack = stack->next;
	}
	return (smallest_node);
}

bool	sorted(t_stack *stk)
{

	while (stk->next)
	{
		if (stk->value > stk->next->value)
			return (false);
		stk = stk->next;
	}
	return (true);
}

long	ft_atol(const char *str, int *error)
{
	long long	result;
	int			nagetive;

	result = 0;
	nagetive = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			nagetive = -1;
	}
	while (ft_isdigit(*str))
	{
		if (nagetive && ((result * 10) + *str - '0') < result)
			*error = 1;
		else if (!nagetive && ((result * 10) + *str - '0') < result)
			*error = 1;
		result = result * 10 + (*str++ - '0');
	}
	return (result * nagetive);
}

