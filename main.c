/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmunir <nmunir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:58:38 by nmunir            #+#    #+#             */
/*   Updated: 2023/09/17 17:46:44 by nmunir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack *stack_a;
	if (ac > 1)
	{
		check_arg(ac, av);
		stack_a = create_stack(ac, av, stack_a);
		ft_sort_3(&stack_a);
		print_stack(stack_a);
	}
	else
		return (error_handling("No arguments!"), -1);
}
