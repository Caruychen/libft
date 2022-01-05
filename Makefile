# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/01 15:25:03 by cchen             #+#    #+#              #
#    Updated: 2022/01/05 16:25:28 by cchen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
SRC := src
INCLUDES := includes/
OBJ := obj/
DIRS = ctype math stdio stdlib string list vec
CTYPE = ft_isalnum \
		ft_isalpha \
		ft_isascii \
		ft_isdigit \
		ft_islower \
		ft_isprint \
		ft_isupper \
		ft_iswhitespace \
		ft_tolower \
		ft_toupper
MATH = ft_imin
STDIO = ft_putchar \
		ft_putchar_fd \
		ft_putendl \
		ft_putendl_fd \
		ft_putnbr \
		ft_putnbr_fd \
		ft_putstr \
		ft_putstr_fd
STDLIB = ft_atoi \
		 ft_itoa \
		 ft_memalloc \
		 ft_memdel \
		 ft_memdelarray \
		 ft_strdel \
		 ft_strdelarray \
		 ft_strnew
STRING = ft_bzero \
		 ft_memccpy \
		 ft_memchr \
		 ft_memcmp \
		 ft_memcpy \
		 ft_memmove \
		 ft_memset \
		 ft_strcat \
		 ft_strchr \
		 ft_strclr \
		 ft_strcmp \
		 ft_strcpy \
		 ft_strdup \
		 ft_strequ \
		 ft_striter \
		 ft_striteri \
		 ft_strjoin \
		 ft_strlcat \
		 ft_strlen \
		 ft_strmap \
		 ft_strmapi \
		 ft_strncat \
		 ft_strncmp \
		 ft_strncpy \
		 ft_strnequ \
		 ft_strnstr \
		 ft_strrchr \
		 ft_strsplit \
		 ft_strstr \
		 ft_strsub \
		 ft_strtrim
LIST = ft_lstadd \
	   ft_lstdel \
	   ft_lstdelone \
	   ft_lstiter \
	   ft_lstmap \
	   ft_lstnew
VEC = vec_copy \
	  vec_free \
	  vec_from \
	  vec_new \
	  vec_resize
SRCS = $(patsubst %, $(SRC)/ctype/%.c, $(CTYPE)) \
	   $(patsubst %, $(SRC)/math/%.c, $(MATH)) \
	   $(patsubst %, $(SRC)/stdio/%.c, $(STDIO)) \
	   $(patsubst %, $(SRC)/stdlib/%.c, $(STDLIB)) \
	   $(patsubst %, $(SRC)/string/%.c, $(STRING)) \
	   $(patsubst %, $(SRC)/list/%.c, $(LIST)) \
	   $(patsubst %, $(SRC)/vec/%.c, $(VEC))

OBJECTS = $(patsubst %, $(OBJ)%.o, $(CTYPE) $(MATH) $(STDIO) $(STDLIB) $(STRING) $(LIST) $(VEC))

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRCS) -I./includes -I./includes/libft
	ar -rcs $(NAME) $(OBJECTS)

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
