#include "push_swap.h"

void print_stack(t_stack *stack_a)
{
	while (stack_a)
	{
		printf("%d\n", stack_a->value);
		stack_a = stack_a->next;
	}
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

int max(t_stack *stack)
{
	int max;

	max = stack->value;
	while (stack)
	{
		if (stack->value > max)
			max = stack->value;
		stack = stack->next;
	}
	return (max);
}

int min(t_stack *stack)
{
	int min;

	min = stack->value;
	while (stack)
	{
		if (stack->value < min)
			min = stack->value;
		stack = stack->next;
	}
	return (min);
}