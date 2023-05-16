# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-kace <ael-kace@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/08 19:52:29 by ael-kace          #+#    #+#              #
#    Updated: 2023/04/16 20:38:45 by ael-kace         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

HEADER = push_swap.h

SRC = 	push_swap.c parsing_stack.c lib_tool.c lib_tool_1.c lib_tool_2.c \
		utils_pshswp.c llib_tool_3.c swp_stack.c rot_stack.c rev_rot_stack.c \
		psh_stack.c easy_mod_sort.c hard_mod_sort.c utils_pshswp_1.c \

OBJ = $(SRC:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
		-rm -f $(OBJ)

fclean : clean
		-rm -f $(NAME)

re : fclean all

.PHONY = all clean fclean re
