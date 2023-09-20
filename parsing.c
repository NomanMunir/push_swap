/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:53:25 by nmunir            #+#    #+#             */
/*   Updated: 2023/09/20 14:15:31 by codespace        ###   ########.fr       */
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
		return (error_handling("Error!"), free(args), NULL);
		tmp_arg = ft_strjoin(args, av[i]);
		free(args);
		args = ft_strjoin(tmp_arg, " ");
		free(tmp_arg);
		i++;
	}
	split = ft_split(args, ' ');
	free(args);
	return (split);
}

char **check_arg(int ac, char **av)
{
	int		i;
	long	tmp;
	char	**args;

	i = 0;
	args = av + 1;
	while (args[i])
	{
		tmp = ft_atol(args[i]);
		// while(*args[i])
		// {
		// 	if (*args[i] != '-' && *args[i] != '+' && !ft_isdigit(*args[i])
		// 	&& *args[i] != ' ' && *args[i] != '\t')
		// 		return (error_handling("Error!"), NULL);
		// 	args[i]++;
		// }
		if (!is_num(args[i]) || ft_isspace(args[i]) || !args[i][0])
			return (error_handling("Error!"), NULL);
		if (tmp > 2147483647 || tmp < -2147483648)
			return (error_handling("Out of range!"), NULL);
		if (is_duplicate(args))
			return (error_handling("Dublicate arguments!"), NULL);
		i++;
	}
	args = create_args(ac, av);
	if (!args)
		return (error_handling("Error!"), NULL);
	return (args);
}
