/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 11:32:50 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/21 18:27:49 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"
#include <stdio.h>

int	to_show(char *str, int param)
{
	int		size;
	int		i;
	char	*new;

	size = str_len(str) - 1;
	param++;
	i = 0;
	new = malloc(sizeof(char) * param);
	if (str_len(str) < param)
		ft_putstr(str);
	else
		while (--param > 0)
			new[++i] = str[--size];
	while (i > 0)
		ft_putchar(new[--i]);
	free(new);
	return (0);
}

int	show_title(int ac, int current, char *title, int cpt)
{
	if (ac > 4 && current >= 4 && cpt > 0)
	{
		ft_putstr("\n\n==> ");
		ft_putstr(title);
		ft_putstr(" <==\n");
		return (0);
	}
	ft_putstr("==> ");
	ft_putstr(title);
	ft_putstr(" <==\n");
	return (0);
}

int	error_mgmt(int ac, char **av, int fd, char *tmp, char *str)
{
	int	i;
	int	cpt;

	i = 2;
	cpt = -1;
	while (++i < ac)
	{
		fd = open(av[i], O_RDONLY);
		if (fd < 0)
		{
			ft_putstr_error("tail: ");
			ft_putstr_error(av[i]);
			ft_putstr_error(": No such file or directory");
		}
		else
		{
			while (read(fd, tmp, 1))
				str = concat_str(str, tmp);
			show_title(ac, i, av[i], ++cpt);
			to_show(str, ft_atoi(av[2]));
			free(str);
			close(fd);
			str = 0;
		}
	}
	return (1);
}

int	main(int ac, char **av)
{
	int		i;
	int		fd;
	char	*str;
	char	*tmp;

	i = 2;
	fd = 0;
	tmp =  0;
	if (ac < 3 || (av[1][0] == '-' && av[2][1] == 'c'))
		return (0);
	tmp = malloc(sizeof(char));
	error_mgmt(ac, av, fd, tmp, str);
	free(tmp);
	return (0);
}
