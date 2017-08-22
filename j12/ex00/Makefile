# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/20 17:00:22 by jlehideu          #+#    #+#              #
#    Updated: 2017/08/21 10:52:19 by jlehideu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SOURCES = display.c\
		  basics.c

OBJECTS = display.o\
		  basics.o

all: $(NAME)

$(NAME): object
	gcc -o $(NAME) $(OBJECTS)

object:
	gcc -c $(SOURCES)

clean:
	rm $(NAME)

fclean: clean
	rm $(OBJECTS)
