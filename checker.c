/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:03:11 by codespace         #+#    #+#             */
/*   Updated: 2023/09/21 19:35:21 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int main(int ac, char **av)
{
	char		**args;
	t_stack		*a;
	t_stack		*b;
	char		*line;
	int			len;

	a = NULL;
	b = NULL;
	if (ac == 1)
		return (0);
	args = check_arg(av);
	init_stack(args, &a);
	ft_free(args);
	if(sorted(a))
		return (ft_free_nodes(&a), 0);
	len = lstsize(a);
	line = get_next_line(0);
	while (line)
	{
		validate_command(line, &a, &b);
		free(line);
		line = get_next_line(0);
	}
	free(line);
	if (sorted(a) && lstsize(a) == len)
		ft_putendl_fd("OK", 1);
	else
		ft_putendl_fd("KO", 1);
	return (ft_free_nodes(&a), ft_free_nodes(&b), 0);
}
