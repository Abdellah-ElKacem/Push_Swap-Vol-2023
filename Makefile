# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdellah_elkacem <abdellah_elkacem@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/08 19:52:29 by ael-kace          #+#    #+#              #
#    Updated: 2023/03/31 18:18:05 by abdellah_el      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

HEADER = push_swap.h

SRC = 	push_swap.c parsing_stack.c lib_tool.c lib_tool_1.c lib_tool_2.c \
		utils_pshswp.c llib_tool_3.c 

OBJ = $(SRC:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(OBJ) -o $(NAME)

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
		-rm -f $(OBJ)

fclean : clean
		-rm -f $(NAME)

re : fclean all

.PHONY = all clean fclean re