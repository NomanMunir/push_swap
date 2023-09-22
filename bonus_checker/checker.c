/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmunir <nmunir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:03:11 by codespace         #+#    #+#             */
/*   Updated: 2023/09/22 22:02:13 by nmunir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int ac, char **av)
{
	char	**args;
	t_stack	*a;
	t_stack	*b;
	int		len;

	a = NULL;
	b = NULL;
	if (ac == 1)
		return (0);
	args = check_arg(av);
	init_stack(args, &a);
	len = lstsize(a);
	if (sorted(a))
		return (ft_free_nodes(&a), 0);
	ft_input(&a, &b);
	if (sorted(a) && lstsize(a) == len)
		ft_putendl_fd("OK", 1);
	else
		ft_putendl_fd("KO", 1);
	return (ft_free_nodes(&a), ft_free_nodes(&b), 0);
}
