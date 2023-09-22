# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarrio- <abarrio-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 11:55:51 by abarrio-          #+#    #+#              #
#    Updated: 2023/09/22 20:18:40 by abarrio-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CFLAGS=-Wall -Werror -Wextra
# -g3 -fsanitize=address
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
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c

OBJ= $(FUNCTIONS:%.c=%.o)

BONUS=	ft_lstnew_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstadd_back_bonus.c \
		ft_lstsize_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstmap_bonus.c

OBJBONUS= $(BONUS:%.c=%.o)
bonusu = .cache

all: $(NAME)

$(NAME): $(OBJ)
	ar -crs $(NAME) $(OBJ)
#cc  $^ -o $(NAME)

bonus: $(bonusu)
	
$(bonusu): $(NAME) $(OBJBONUS)
	ar -crs $^
	ar -crs $(bonusu) $^

test_bonus: bonus testbonus.o
	cc ${CFLAGS} testbonus.o -o bonus -L. -lft
test: $(NAME) pruebas.o
	cc ${CFLAGS} pruebas.o -o tests -L. -lft

#debug: ${CFLAGS}+=-fsanitize=address -g3
#debug: re

#%.o: %.c
#	cc $(CFLAGS) -c $<

clean:
	rm -rf $(OBJ) $(OBJBONUS)
fclean: clean
	rm -rf $(NAME) $(bonusu)
re: fclean all
.PHONY: clean fclean re all