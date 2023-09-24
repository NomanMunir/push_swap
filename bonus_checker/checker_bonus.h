/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmunir <nmunir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:03:11 by codespace         #+#    #+#             */
/*   Updated: 2023/09/22 22:00:42 by nmunir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../lib/get_next_line/get_next_line.h"
# include "../push_swap.h"

void	validate_command(char *line, t_stack **a, t_stack **b);
void	ft_input(t_stack **a, t_stack **b);

#endif