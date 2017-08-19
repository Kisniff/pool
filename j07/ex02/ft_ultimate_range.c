/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 11:05:31 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/09 09:22:10 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*table;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	table = (int*)malloc(sizeof(int) * (max - min));
	while ((min + i) < max)
	{
		table[i] = min + i;
		i++;
	}
	*range = table;
	return (max - min);
}
