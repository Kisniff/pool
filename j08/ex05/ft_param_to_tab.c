/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 14:43:56 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/17 15:50:36 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					str_len(char *str)
{
	int			i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

char				*ft_strcpy(t_stock_par *tab, char *str, int idx_s)
{
	int			count_param;

	count_param = -1;
	while (str[++count_param] != '\0')
		;
	tab[idx_s].copy = (char*)malloc(sizeof(char) * count_param);
	count_param = -1;
	while (str[++count_param])
		tab[idx_s].copy[count_param] = str[count_param];
	tab[idx_s].copy[count_param] = '\0';
	return (tab[idx_s].copy);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int			idx_s;
	t_stock_par	*tab;

	tab = malloc(sizeof(t_stock_par) * ac + 1);
	idx_s = 0;
	while (idx_s < ac)
	{
		tab[idx_s].copy = ft_strcpy(tab, av[idx_s], idx_s);
		tab[idx_s].size_param = str_len(av[idx_s]);
		tab[idx_s].str = av[idx_s];
		tab[idx_s].tab = ft_split_whitespaces(av[idx_s]);
		idx_s++;
	}
	tab[idx_s].str = 0;
	return (tab);
}
