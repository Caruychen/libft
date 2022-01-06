# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 11:41:26 by cchen             #+#    #+#              #
#    Updated: 2022/01/06 13:48:07 by cchen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test
UNITS = units/
INCLUDES = -Iincludes/ -I../includes -I../includes/libft
FUNCTIONS := $(shell cat test_files.txt)
PARTS = $(patsubst %, $(UNITS)/%.c, $(FUNCTIONS))

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror  test_main.c $(PARTS) $(INCLUDES) -L.. -lft -o $(NAME)

fclean:
	/bin/rm $(NAME)

re: fclean all
