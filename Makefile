# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarrio- <abarrio-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 11:55:51 by abarrio-          #+#    #+#              #
#    Updated: 2023/09/14 21:06:50 by abarrio-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CFLAGS=-Wall -Werror -Wextra 
#-fsanitize=address -g3
FUNCTIONS=	ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c

OBJ= $(FUNCTIONS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)
#cc  $^ -o $(NAME)

test: $(NAME) pruebas.o
	cc ${CFLAGS} pruebas.o -o tests -L. -lft

#debug: ${CFLAGS}+=-fsanitize=address -g3
#debug: re

%.o: %.c
	cc $(CFLAGS) -c $<

clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all
.PHONY: clean fclean re