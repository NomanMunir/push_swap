/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmunir <nmunir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:53:25 by nmunir            #+#    #+#             */
/*   Updated: 2023/09/17 13:02:29 by nmunir           ###   ########.fr       */
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

static int is_dublicate(char **str, int num, int len)
{
	while (str[++len])
		if (ft_atoi(str[len]) == num)
			return (1);
	return (0);
}

void check_arg(int ac, char **av)
{
	int		i;
	long	tmp;

	i = 0;
	char **str;
	if (ac == 2)
		str = ft_split(av[1], ' ');
	else
		str = av + 1;
	while (str[i])
	{
		tmp = ft_atol(str[i]);
		if (!is_num(str[i]))
			error_handling("Not a Number!");
		if (tmp > 2147483647 || tmp < -2147483648)
			error_handling("Out of range!");
		if (is_dublicate(str, tmp, i))
			error_handling("Dublicate arguments!");
		i++;
	}
	if (ac == 2)
		ft_free(str);
}
