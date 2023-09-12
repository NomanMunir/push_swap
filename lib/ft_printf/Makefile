# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmunir <nmunir@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/03 12:33:13 by nmunir            #+#    #+#              #
#    Updated: 2023/09/11 18:35:57 by nmunir           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CFLAGS = -Wall -Werror -Wextra
CC = cc
OBJS = $(SRC:.c=.o)

SRC =	ft_printf.c \
		utils.c \
		ft_itoa.c \
		put_hex.c \
		ft_put_unsigned_int.c \
		ft_put_ptr.c \

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

norm:
	norminette $(SRC)

.PHONY: all clean fclean re norm
