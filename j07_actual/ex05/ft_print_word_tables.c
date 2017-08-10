/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_word_tables.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 09:49:15 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/09 15:17:49 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_putchar(char c);
char	**ft_split_whitespaces(char *str);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_word_tables(char **tab)
{
	int	idx_l;
	int	idx_c;

	idx_l = 0;
	idx_c = 0;
	while (tab[idx_l])
	{
		while (tab[idx_l][idx_c])
		{
			ft_putchar(tab[idx_l][idx_c]);
			idx_c++;
		}
		ft_putchar('\n');
		idx_l++;
		idx_c = 0;
	}
}
