# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/16 10:06:02 by jlehideu          #+#    #+#              #
#    Updated: 2017/08/22 10:43:57 by jlehideu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SOURCES = main.c ft_atoi.c basics.c operations.c

OBJ = main.o ft_atoi.o basics.o operations.o

all : $(NAME)

$(NAME): compilation
	gcc -o $(NAME) $(OBJ)

compilation:
	gcc -c $(SOURCES)

clean:
	rm $(OBJ)
