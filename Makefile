# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-kace <ael-kace@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/08 19:52:29 by ael-kace          #+#    #+#              #
#    Updated: 2023/03/18 15:29:15 by ael-kace         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PUSH_SWAP

HEADER = push_swap.h

SRC = push_swap.c psh_stack.c swp_stack.c utils_stack.c 

OBJ = $(SRC:.c = .o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(OBJ) -o $(NAME)

%.o = %.c $(HEADER)
	$(CC) $(CFLAGS) -c $<

clean :
		-rm -f %(OBJ)

fclean :
		-rm -f $(NAME)

re : fclean all

.PHONY = all clean fclean re