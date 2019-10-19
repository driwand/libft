# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abkssiba <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/16 11:35:54 by abkssiba          #+#    #+#              #
#    Updated: 2019/10/16 14:56:38 by abkssiba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = libc
NAME = libft.a
FLAGS = -Wall -Wextra -Werror

all:
	gcc $(FLAGS) -c ft_*.c -std=c99
	ar rcs libft.a *.o

$(NAME): all

clean:
	rm -f *.o

fclean: clean
	rm -f libft.a

re: fclean all
