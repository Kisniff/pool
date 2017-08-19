/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_colle.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleroux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 18:39:09 by pleroux           #+#    #+#             */
/*   Updated: 2017/08/19 18:58:17 by pleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_colle.h"

void	check_num_colle(int x, int y, char *str)
{
	int		num;
	int		size;
	char	*tab;
	int		i;

	i = 0;
	num = -1;
	size = (x + 1) * y + 1;
	tab = (char*)malloc(sizeof(*tab) * size);
	while (i < 5)
	{
		tab = get_colle(i, x, y, tab);
		if (strcmp(str, tab) == 0)
			print_colle(x, y, num);
		i++;
	}
}

char	*get_colle(int num, int x, int y, char *tab)
{
	if (num == 0)
		return (colle00(x, y, tab));
	if (num == 1)
		return (colle01(x, y, tab));
	if (num == 2)
		return (colle02(x, y, tab));
	if (num == 3)
		return (colle03(x, y, tab));
	return (colle04(x, y, tab));
}
