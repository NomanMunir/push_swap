
#include "checker.h"

static int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i])
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	return (0);
}

void validate_command(char *line, t_stack **a, t_stack **b)
{
	if (!ft_strcmp(line, "pa\n"))
		pa(a, b, 0);
	else if (!ft_strcmp(line, "pb\n"))
		pb(b, a, 0);
	else if (!ft_strcmp(line, "sa\n"))
		sa(a, 0);
	else if (!ft_strcmp(line, "sb\n"))
		sb(b, 0);
	else if (!ft_strcmp(line, "ss\n"))
		ss(a, b, 0);
	else if (!ft_strcmp(line, "ra\n"))
		ra(a, 0);
	else if (!ft_strcmp(line, "rb\n"))
		rb(b, 0);
	else if (!ft_strcmp(line, "rr\n"))
		rr(a, b, 0);
	else if (!ft_strcmp(line, "rra\n"))
		rra(a, 0);
	else if (!ft_strcmp(line, "rrb\n"))
		rrb(b, 0);
	else if (!ft_strcmp(line, "rrr\n"))
		rrr(a, b, 0);
	else
		return (ft_free_nodes(a), ft_free_nodes(b), error_handling());
}