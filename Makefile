# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ranascim <ranascim@42.student.42sp.org.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/04 07:19:21 by ranascim          #+#    #+#              #
#    Updated: 2022/05/10 19:01:02 by ranascim         ###   ########.fr        #
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
                ft_split.c \
                ft_itoa.c \
                ft_strmapi.c \
                ft_striteri.c \
                ft_putchar_fd.c \
                ft_putstr_fd.c \
                ft_putendl_fd.c \
                ft_putnbr_fd.c

OBJ = $(SRC:.c=.o)

BONUS = ft_lstnew.c \
                ft_lstadd_front.c \
                ft_lstsize.c \
                ft_lstlast.c \
                ft_lstadd_back.c \
                ft_lstdelone.c \
                ft_lstclear.c \
                ft_lstiter.c \
                ft_lstmap.c

OBJ_BONUS = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(SRC) $(LIB)
		$(CC) $(CFLAGS) -c $(SRC) -I .
		ar -rc $(NAME) $(OBJ)

bonus: $(BONUS) $(LIB)
		$(CC) $(CFLAGS) -c $(BONUS) -I .
		ar -rc $(NAME) $(OBJ_BONUS)

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all
