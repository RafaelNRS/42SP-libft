# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ranascim <ranascim@42.student.42sp.org.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/04 07:19:21 by ranascim          #+#    #+#              #
#    Updated: 2022/05/04 07:19:21 by ranascim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIB = libft.h

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_isalpha.c \
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
                ft_split.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRC) $(LIB)
		$(CC) $(CFLAGS) -c $(SRC) -I .
		ar -rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)
