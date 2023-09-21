#include "push_swap.h"

void error_handling(char *error)
{
	ft_putendl_fd("Error", 2);
	ft_putendl_fd(error, 2);
	exit(0);
}