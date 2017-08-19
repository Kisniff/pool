/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleroux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 19:53:40 by pleroux           #+#    #+#             */
/*   Updated: 2017/08/19 18:37:30 by pleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush00.h"

char	*print_rush00(int a, char car[3], char *tab)
{
	int i;

	i = 0;
	*(tab++) = car[0];
	while (i < a - 2)
	{
		*(tab++) = car[1];
		i++;
	}
	if (a > 1)
		*(tab++) = car[2];
	*(tab++) = '\n';
	return (tab);
}

char	*rush(int a, int b, char car[3][3], char *tab)
{
	int		j;
	char	*str;

	str = tab;
	if (a > 0 || b > 0)
		tab = print_rush00(a, car[0], tab);
	j = 0;
	while (j < b - 2)
	{
		tab = print_rush00(a, car[1], tab);
		j++;
	}
	if (b > 1)
		tab = print_rush00(a, car[2], tab);
	*tab = '\0';
	return (str);
}
