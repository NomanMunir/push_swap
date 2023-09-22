# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmunir <nmunir@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/10 15:18:50 by abashir           #+#    #+#              #
#    Updated: 2023/09/22 22:11:29 by nmunir           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
BNAME = checker

SRC =	stack.c \
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

BSRC =	bonus_checker/checker.c \
		bonus_checker/checker_utils.c \
		lib/get_next_line/get_next_line.c \
		lib/get_next_line/get_next_line_utils.c \

INC = lib/get_next_line/get_next_line.h
OBJ = $(SRC:.c=.o)
BOBJ = $(BSRC:.c=.o)
ARC = lib/libft/libft.a

CC = cc
CFLAGS = -Wall -Werror -Wextra

all: libft $(OBJ)
	$(CC) $(CFLAGS) main.c $(OBJ) $(ARC) -o $(NAME)

bonus: libft $(BOBJ) $(OBJ)
	$(CC) $(CFLAGS) -I $(INC) $(BOBJ) $(OBJ) $(ARC) -o $(BNAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

libft:
	cd lib/libft && make

clean:
	rm -f -v $(OBJ) $(BOBJ)
	cd lib/libft && make clean
	
fclean: clean
	rm -f $(NAME) $(BNAME)
	cd lib/libft && make fclean

re: fclean all

norm:
	norminette $(SRC) $(BSRC) $(INC) push_swap.h
	cd lib/libft && make norm

.PHONY: all clean fclean re libft norm bonus
