# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/21 14:01:20 by jlehideu          #+#    #+#              #
#    Updated: 2017/08/21 19:08:02 by jlehideu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail

SOURCES = get_read_str.c\
		  ft_tail.c\
		  basics.c\
		  ft_atoi.c

OBJECTS = get_read_str.o\
		  ft_tail.o\
		  basics.o\
		  ft_atoi.o

all: $(NAME)

$(NAME): objectisation
	gcc -o $(NAME) $(OBJECTS)

objectisation:
	gcc -c $(SOURCES)

clean:
	rm $(OBJECTS)

fclean: clean
	rm $(NAME)
