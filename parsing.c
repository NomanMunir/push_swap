/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:53:25 by nmunir            #+#    #+#             */
/*   Updated: 2023/09/21 08:40:23 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int is_num(char *str)
{
	int		i;
	int		error;
	long	tmp;

	i = 0;
	error = 0;
	while ((str[i] == ' ' || str[i] == '\t') && str[i])
		i++;
	if ((str[i] == '-' || str[i] == '+') && str[i])
		i++;
	if (str[i] == '\0')
		return (0);
	while (str[i])
		if (!ft_isdigit(str[i++]))
			return (0);
	tmp = ft_atol(str, &error);
	if (tmp > 2147483647 || tmp < -2147483648 || error == 1)
		return (error_handling("Out of range!"), 0);
	return (1);
}

int ft_isspace(char *str)
{
	int i;

	i = 0;
	while (str[i] && (str[i] == '\t' || str[i] == ' '))
		i++;
	if (str[i] == '\0')
		return (1);
	return (0);
}

static char **create_args(int ac, char **av)
{
	char	*tmp_arg;
	char	*args;
	char	**split;
	int		i;

	i = 1;
	if (ft_isspace(av[i]))
		return (error_handling("Error!"), NULL);
	args = ft_strjoin(av[i++], " ");
	while(av[i])
	{
	if (ft_isspace(av[i]))
		return (free(args), error_handling("Error!"), NULL);
		tmp_arg = ft_strjoin(args, av[i]);
		free(args);
		args = ft_strjoin(tmp_arg, " ");
		free(tmp_arg);
		i++;
	}
	split = ft_split(args, ' ');
	if (!split)
		return (error_handling("Error!"), NULL);
	free(args);
	return (split);
}
static int check_valid(char *str)
{
	int	i;

	i = 0;
	if (!str || *str == '\0' || ft_isspace(str))
		return (0);
	while(str[i])
		{
			if (str[i] != '-' && str[i] != '+' && !ft_isdigit(str[i])
			&& str[i] != ' ')
				return (0);
			i++;
		}
	return (1);
}

char	**check_arg(int ac, char **av)
{
	int		i;
	char	**args;

	i = 0;
	args = av + 1;
	while (args[i])
		if (!check_valid(args[i++]))
			return (error_handling("Error inValid!"), NULL);
	i = -1;
	args = create_args(ac, av);
	if (!args)
		return (error_handling("Error!"), ft_free(args), NULL);
	while(args[++i])
		if (!is_num(args[i]))
			return (error_handling("Invalid Argument Error!"), ft_free(args), NULL);
	return (args);
}
