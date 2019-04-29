# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrida <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/22 11:32:40 by adrida            #+#    #+#              #
#    Updated: 2019/04/23 13:16:22 by adrida           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

SRC=ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isalnum.c ft_isprint.c\
 ft_toupper.c ft_tolower.c ft_strlen.c ft_strdup.c ft_atoi.c ft_strcmp.c\
  ft_strncmp.c ft_strstr.c ft_strcat.c ft_strncat.c ft_strcpy.c ft_strncpy.c\
	 ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c\
	 ft_memcmp.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strlcat.c\

INC=libft.h
OBJ = $(SRC:.c=.o)

FLAGS =-Wall -Wextra -Werror -Iincludes -I.

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $^

%.o: %.c $(INC)
	@gcc $(FLAGS) -o $@ -c $<

re: fclean all

clean:
	@/bin/rm -Rf $(OBJ)

fclean: clean
	@/bin/rm -Rf $(NAME)
