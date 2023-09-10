#include "push_swap.h"


int main(int ac, char **av)
{
	if (ac > 1)
	{
		if (check_arg(ac, av) == 0)
			return (0);
	}
	else
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
}