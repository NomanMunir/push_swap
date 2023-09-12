/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmunir <nmunir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:26:31 by nmunir            #+#    #+#             */
/*   Updated: 2023/07/23 18:31:51 by nmunir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_putstr(char *s);
int		ft_putchar(int c);
int		ft_putnbr(int nbr);
char	*ft_itoa(int n);
int		put_hex(unsigned int num, const char format);
int		ft_put_unsigned_int(unsigned int n);
int		ft_put_ptr(uintptr_t ptr);

#endif