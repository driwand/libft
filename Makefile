# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abkssiba <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/16 11:35:54 by abkssiba          #+#    #+#              #
#    Updated: 2019/10/22 20:00:45 by abkssiba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = libc
NAME = libft.a
FLAGS = -Wall -Wextra -Werror

all:
	gcc $(FLAGS) -c ft_*.c -std=c99
	ar rcs libft.a *.o

cp:
	cp $(SRCS)/ft_*.c .
	cp Part2_Funcs/ft_*.c .
	cp bonus/ft_*.c .

$(NAME): all

clean:
	rm -f ft_*.o
	rm -f ft_*.c

fclean: clean
	rm -f libft.a

re: fclean all
