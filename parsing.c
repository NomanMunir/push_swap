/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmunir <nmunir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:53:25 by nmunir            #+#    #+#             */
/*   Updated: 2023/09/19 11:10:36 by nmunir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int is_num(char *str)
{
	int i;

	i = 0;
	while ((str[i] == ' ' || str[i] == '\t') && str[i])
		i++;
	if ((str[i] == '-' || str[i] == '+') && str[i])
		i++;
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

static bool is_duplicate(char **args)
{
	int i;
	int j;

	i = 0;
	while (args[i])
	{
		j = i + 1;
		while (args[j])
		{
			if (ft_atol(args[i]) == ft_atol(args[j]))
				return (true);
			j++;
		}
		i++;
	}
	return (false);
}

void check_arg(int ac, char **av)
{
	int		i;
	long	tmp;

	i = 1;
	if (ac == 1 || (ac == 2 && !av[1][0]))
		return (error_handling("No arguments!"));
	else if (2 == ac)
		av = ft_split(av[1], ' ');
	while (av[i])
	{
		tmp = ft_atol(av[i]);
		if (!is_num(av[i]))
			error_handling("Not a Number!");
		if (tmp > 2147483647 || tmp < -2147483648)
			error_handling("Out of range!");
		if (is_duplicate(av))
			error_handling("Dublicate arguments!");
		i++;
	}
	if (ac == 2)
		ft_free(av);
}
