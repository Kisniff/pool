/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 10:55:00 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/14 09:48:40 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		*result;

	i = 0;
	if ( min >= max)
	{
		*result = NULL;
		return (0);
	}
	result = (int*)malloc(sizeof(int) * (max - min));
	while (max >  min)
	{
		result[i] = min;
		min++;
	}
	return (result);
}
