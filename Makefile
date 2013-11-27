# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gleger <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/20 17:36:06 by gleger            #+#    #+#              #
#    Updated: 2013/11/25 18:54:45 by gleger           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libft.a
FLAGS = -Wall -Wextra -Werror -I./
LIBFLAG = -L./ -lft
SRCS = ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_strdup.c \
		ft_strcpy.c \
		ft_strncpy.c \
		ft_strcat.c \
		ft_strncat.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strstr.c \
		ft_strnstr.c \
		ft_strcmp.c \
		ft_strncmp.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_putstr.c \
		ft_putchar.c
OBJS = $(SRCS:.c=.o)

all:  $(NAME)

$(NAME):	$(OBJS)
			ar rc $@ $^
			ranlib $@

%.o:		%.c
			$(CC) $(FLAGS) -o $@ -c $^

clean:
			@rm -rf $(OBJS)
			@echo Clean done

fclean:	clean
			@rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re all
