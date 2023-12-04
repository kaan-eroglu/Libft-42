# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: keroglu <keroglu@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/09 13:47:15 by keroglu           #+#    #+#              #
#    Updated: 2023/10/30 18:32:23 by keroglu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIB = ar rcs
RM = rm -f

SRC	=	ft_atoi.c  ft_putendl_fd.c ft_strncmp.c \
		ft_bzero.c  ft_putnbr_fd.c ft_strnstr.c \
		ft_calloc.c  ft_putstr_fd.c ft_strrchr.c \
		ft_isalnum.c  ft_split.c ft_strtrim.c \
		ft_isalpha.c  ft_strchr.c ft_substr.c \
		ft_isascii.c  ft_strdup.c ft_tolower.c \
		ft_isdigit.c ft_memchr.c ft_striteri.c ft_toupper.c \
		ft_isprint.c ft_memcmp.c ft_strjoin.c  \
		ft_itoa.c ft_memcpy.c ft_strlcat.c  \
		ft_memmove.c ft_strlcpy.c  ft_memset.c \
		ft_strlen.c  ft_putchar_fd.c ft_strmapi.c

SRC_OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRC_OBJ)
	$(LIB) $(NAME) $(SRC_OBJ)

clean:
	$(RM) $(SRC_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
