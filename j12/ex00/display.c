/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 16:29:57 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/21 11:59:11 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "header.h"

int	main(int ac, char **av)
{
	char *tmp;
	char str;
	int		fd;

	fd = 0;
	if (ac == 1)
	{
		ft_putstr_error("File name missing.");
		return (1);
	}
	else if (ac > 2)
	{
		ft_putstr_error("Too many arguments.");
		return (1);
	}
	fd = open(av[1], O_RDONLY);
	while (read(fd, &str, 1))
		write(1, &str, 1);
	close(fd);
	return (0);
}
