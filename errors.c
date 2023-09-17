#include "push_swap.h"

void error_handling(char *error)
{
	ft_putendl_fd("Error", 1);
	ft_putendl_fd(error, 1);
	exit(0);
}