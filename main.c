/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:58:38 by nmunir            #+#    #+#             */
/*   Updated: 2023/09/20 15:01:11 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack *a;
	t_stack *b;
	char **args;

	a = NULL;
	b = NULL;
	if (ac == 1)
		return(0);
	args = check_arg(ac, av);
	init_stack(args, &a);
	// print_stack(a);
	if (lstsize(a) == 2)
		sa(&a);
	else if (lstsize(a) == 3)
		ft_sort_3(&a);
	else
		push_swap(&a, &b);
	print_stack(a);
	ft_free_nodes(&a, &b);
	return (0);
}
