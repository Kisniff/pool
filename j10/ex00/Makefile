# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/13 11:43:15 by jlehideu          #+#    #+#              #
#    Updated: 2017/08/22 10:34:52 by jlehideu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ./srcs/ft_putchar.c \
	  ./srcs/ft_putstr.c \
	  ./srcs/ft_strcmp.c \
	  ./srcs/ft_strlen.c \
	  ./srcs/ft_swap.c

OBJ = ./ft_putchar.o \
	  ./ft_putstr.o \
	  ./ft_strcmp.o \
	  ./ft_strlen.o \
	  ./ft_swap.o

HEAD = ./include/ft_putchar.h \
	   ./include/ft_putstr.h \
	   ./include/ft_strcmp.h \
	   ./include/ft_strlen.h \
	   ./include/ft_swap.h

NAME = yeye

all : $(NAME)

$(NAME): compile
	ar rc ../libft.a $(OBJ)

compile :
	gcc -c $(SRC) -I $(HEAD)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f ../libft.a

re : fclean all
