/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmunir <nmunir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:58:38 by nmunir            #+#    #+#             */
/*   Updated: 2023/09/20 14:28:52 by nmunir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack *a;
	t_stack *b;

	a = NULL;
	b = NULL;
	
	check_arg(ac, av);
	// init_stack(ac, av, &a);
	// // print_stack(a);
	// if (lstsize(a) == 2)
	// 	sa(&a);
	// else if (lstsize(a) == 3)
	// 	ft_sort_3(&a);
	// else
	// 	push_swap(&a, &b);
	// print_stack(a);
	return (0);
}
