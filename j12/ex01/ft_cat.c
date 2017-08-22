/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 10:53:57 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/21 14:13:59 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int	no_error(char *str, char c, int fd)
{
	fd = open(str, O_RDONLY);
	while (read(fd, &c, 1))
		write(1, &c, 1);
	return (0);
}

int	error_mgmt(char *str, int er)
{
	if (errno != 13)
	{
		ft_putstr_error("ft_cat: ");
		ft_putstr_error(str);
		ft_putstr_error(": No such file or directory\n");
		return (1);
	}
	else
	{
		ft_putstr_error("ft_cat: ");
		ft_putstr_error(str);
		ft_putstr_error(": Permission denied\n");
		return (1);
	}
	return (0);
}

int	main(int ac, char **av)
{
	int		fd;
	char	c;
	int		i;

	fd = 0;
	i = 0;
	errno = 0;
	c = 'a';
	if (ac == 1)
	{
		while (read(0, &c, 1))
			write(1, &c, 1);
		return (0);
	}
	while (++i < ac)
	{
		if (open(av[i], O_RDONLY) < 0)
			error_mgmt(av[i], errno);
		else
			no_error(av[i], c, fd);
	}
	return (0);
}
