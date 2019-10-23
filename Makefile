# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abkssiba <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/16 11:35:54 by abkssiba          #+#    #+#              #
#    Updated: 2019/10/23 18:54:27 by abkssiba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 	ft_atoi.c \
		ft_bzero.c  \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_lstadd_back.c \
		ft_lstadd_front.c \
		ft_lstclear.c \
		ft_lstlast.c \
		ft_lstnew.c \
		ft_lstsize.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strcat.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncat.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_lstdelone.c 
CC = gcc
NAME = libft.a
FLAGS = -Wall -Wextra -Werror -c -std=c99
AR = ar rcs
OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): 
	$(CC) $(FLAGS) $(SRCS) 
	$(AR) $(NAME) $(OBJ)

cp:
	cp libc/ft_*.c .
	cp Part2_Funcs/ft_*.c .
	cp bonus/ft_*.c .

clean:
	rm -f ft_*.o
	#rm -f ft_*.c

fclean: clean
	rm -f libft.a

re: fclean all
