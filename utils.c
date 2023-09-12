#include "push_swap.h"

void print_stack(t_stack *stack_a)
{
	while (stack_a)
	{
		printf("%ld\n", stack_a->value);
		stack_a = stack_a->next;
	}
}