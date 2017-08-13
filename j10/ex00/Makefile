# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/13 11:43:15 by jlehideu          #+#    #+#              #
#    Updated: 2017/08/13 12:04:20 by jlehideu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ../srcs/ft_putchar.c ../srcs/ft_putstr.c ../srcs/ft_strcmp.c ../srcs/ft_strlen.c ../srcs/ft_swap.c

OBJ = ./ft_putchar.o ./ft_putstr.o ./ft_strcmp.o ./ft_strlen.o ./ft_swap.o

HEAD = ../include/ft_putchar.h ../include/ft_putstr.h ../include/ft_strcmp.h ../include/ft_strlen.h ../include/ft_swap.h

lib : compile
	ar rc ../libft.a $(OBJ)
	
compile :
	gcc -c $(SRC)

clean :
	rm -f ../libft.a

fclean : clean
	rm -f *.o

re : fclean lib
