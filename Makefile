# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmunir <nmunir@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/10 15:18:50 by abashir           #+#    #+#              #
#    Updated: 2023/09/19 14:23:13 by nmunir           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC =	main.c \
		stack.c \
		utils.c \
		parsing.c \
		errors.c \
		sorting.c \
		init_nodes.c \
		push_swap.c \
		operations/pushs.c \
		operations/rotates.c \
		operations/rrotates.c \
		operations/swaps.c \

OBJ = $(SRC:.c=.o)
ARC = lib/libft/libft.a

CFLAGS = -Wall -Werror -Wextra

all: libft
	$(CC) $(SRC) $(ARC) -o $(NAME)
	
libft: 
	cd lib/libft && make

clean:
	rm -f -v $(OBJ)
	cd lib/libft && make clean
	
fclean: clean
	rm -f $(NAME)
	cd lib/libft && make fclean

re: fclean all

norm:
	norminette $(SRC)
	cd lib/libft && make norm

.PHONY: all clean fclaen re libft printf norm