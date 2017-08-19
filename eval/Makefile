# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/19 10:21:02 by jlehideu          #+#    #+#              #
#    Updated: 2017/08/19 11:30:38 by jlehideu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval-expr

SOURCES = main.c\
		  basics.c\
		  calculation.c\
		  ft_atoi.c

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(SOURCES)

clean:
	rm $(NAME)

re: clean all
