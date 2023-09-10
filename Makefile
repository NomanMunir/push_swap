# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmunir <nmunir@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/10 15:18:50 by abashir           #+#    #+#              #
#    Updated: 2023/09/10 18:58:38 by nmunir           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = main.c
		
OBJ = $(SRC:.c=.o)
ARC = libft/libft.a
CC = cc

CFLAGS = -Wall -Werror -Wextra

all: libft
	$(CC) $(SRC) $(ARC) -o $(NAME)
	
libft:
	cd libft && make

clean:
	rm -f -v $(OBJ) libft/*.o minilibx/*.o
	
fclean: clean
	rm -f $(NAME) libft/*.a minilibx/*.a

re: fclean all

norm:
	norminette $(SRC) 

.PHONY: all clean fclaen re libft