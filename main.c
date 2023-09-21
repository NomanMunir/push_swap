/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:58:38 by nmunir            #+#    #+#             */
/*   Updated: 2023/09/21 18:08:52 by codespace        ###   ########.fr       */
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
	args = check_arg(av);
	init_stack(args, &a);
	ft_free(args);
	if (sorted(a))
		return (ft_free_nodes(&a), 0);
	if (lstsize(a) == 2)
		sa(&a, 1);
	else if (lstsize(a) == 3)
		ft_sort_3(&a);
	else
		push_swap(&a, &b);
	ft_free_nodes(&a);
	return (0);
}
