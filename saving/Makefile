# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nisharma <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/19 14:52:19 by nisharma          #+#    #+#              #
#    Updated: 2024/04/12 23:26:44 by nisharma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG = -Wextra -Werror -Wall

CC = gcc

NAME = libft.a

source = 	ft_bzero.c \
     		ft_isdigit.c \
			ft_memcpy.c \
			ft_strrchr.c \
			ft_isalnum.c \
			ft_isprint.c \
			ft_memmove.c \
			ft_strlen.c \
			ft_tolower.c \
			ft_isalpha.c \
			ft_memchr.c \
			ft_memset.c \
			ft_strncmp.c \
			ft_toupper.c \
			ft_atoi.c \
			ft_isascii.c \
			ft_memcmp.c \
			ft_strchr.c \
			ft_strnstr.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putnbr_fd.c \
			ft_putendl_fd.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_split.c
			
OBJECTS = $(source:%.c=%.o)

all: $(NAME)

%.o: %.c
	$(CC) $(FLAG) -o $@ -c $<

$(NAME): $(OBJECTS)
	ar src $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean:	clean
	rm -f $(NAME)

re:			fclean all

.PHONY: all clean fclean re