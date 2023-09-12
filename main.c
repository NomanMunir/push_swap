/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmunir <nmunir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:58:38 by nmunir            #+#    #+#             */
/*   Updated: 2023/09/12 21:36:48 by nmunir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_sort_3(t_stack *stack_a)
{
	
}

int	main(int ac, char **av)
{
	t_stack *stack_a;
	// printf("%s\n", ft_split(av[1], ' ')[1]);
	if (ac > 1)
	{
		if (check_arg(ac, av) == 0)
			return (0);
		stack_a = create_stack(ac, av, stack_a);
		ft_sort_3(stack_a);
		print_stack(stack_a);
	}
	else
		return (error_handling(1), 0);
}
