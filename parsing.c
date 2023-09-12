/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmunir <nmunir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:53:25 by nmunir            #+#    #+#             */
/*   Updated: 2023/09/12 19:16:14 by nmunir           ###   ########.fr       */
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

int check_arg(int ac, char **av)
{
	int i;

	i = -1;
	char **str;
	if (ac == 2)
	{
		str = ft_split(av[1], ' ');
		if (!str)
			return (free(str), 0);
	}
	else
	{
		str = ft_split(av[1], ' ');
		if (str[1])
			return (error_handling(2), free(str), 0);
		else
			str = av + 1;
	}
	while (str[++i])
		if (!is_num(str[i]) || !(ft_atoi(str[i]) <= 2147483647 && \
		ft_atoi(str[i]) >= -2147483648))
			return (error_handling(3), free(str), 0);
	return (1);
}
