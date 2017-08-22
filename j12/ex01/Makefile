# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/21 11:19:46 by jlehideu          #+#    #+#              #
#    Updated: 2017/08/21 11:25:11 by jlehideu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

SOURCES = basics.c ft_cat.c

OBJECTS = basics.o ft_cat.o

all: $(NAME)

$(NAME): objectisation
	gcc -o $(NAME) $(OBJECTS)

objectisation:
	gcc -c $(SOURCES)

clean:
	rm $(NAME)

fclean: clean
	rm $(OBJECTS)
