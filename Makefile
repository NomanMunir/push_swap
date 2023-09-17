# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmunir <nmunir@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/10 15:18:50 by abashir           #+#    #+#              #
#    Updated: 2023/09/17 17:47:29 by nmunir           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC =	main.c \
		parsing.c \
		errors.c \
		stack.c \
		utils.c \
		operations/pushs.c \
		operations/rotates.c \
		operations/rrotates.c \
		operations/swaps.c \
		sorting.c \
	
OBJ = $(SRC:.c=.o)
ARC = lib/libft/libft.a lib/ft_printf/libftprintf.a
CC = cc

CFLAGS = -Wall -Werror -Wextra

all: libft printf
	$(CC) $(SRC) $(ARC) -o $(NAME)
	
libft: 
	cd lib/libft && make
	
printf:
	cd lib/ft_printf && make

clean:
	rm -f -v $(OBJ)
	cd lib/libft && make clean
	cd lib/ft_printf && make clean
	
fclean: clean
	rm -f $(NAME)
	cd lib/libft && make fclean
	cd lib/ft_printf && make fclean

re: fclean all

norm:
	norminette $(SRC)
	cd lib/libft && make norm
	cd lib/ft_printf && make norm

.PHONY: all clean fclaen re libft printf norm