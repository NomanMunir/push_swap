#include "push_swap.h"

void error_handling(int error_code)
{
	ft_putstr_fd("Error\n", 2);
	if (error_code == 1)
		ft_putstr_fd("Not enough arguments!\n", 2);
	else if (error_code == 2)
		ft_putstr_fd("Too many arguments!\n", 2);
	else if (error_code == 3)
		ft_putstr_fd("Invalid argument!\n", 2);
	exit(0);
}
