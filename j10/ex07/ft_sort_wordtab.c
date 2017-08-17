/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 16:10:57 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/16 18:44:36 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int		tab_size(char **str)
{//OP
	int		i;

	i = 0;
	while(str[i] != 0)
		i++;
	return (i);
}

int		swap_str(char **str, char **str2)
{
	char	*tmp;

	tmp = *str;
	*str = *str2;
	*str2 = tmp;
	return (0);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		size_tab;

	size_tab = tab_size(tab);
	i = tab_size(tab) - 1;
	printf("taille du tableau -> %d\n", size_tab);
	while (size_tab > 0)
	{
		while (i > 0)
		{
			if (ft_strcmp(tab[i], tab[i - 1]) < 0)
			{
				swap_str(&tab[i], &tab[i - 1]);
			}
			i--;
		}
		size_tab--;
		i = size_tab - 1;
	}
}

int		main(int ac, char **av)
{
	int	i;

	i = 1;
	(void)ac;
	ft_sort_wordtab(av);
	while (i < ac)
	{
		printf("%s\n", av[i]);
		i++;
	}
	return (0);
}
