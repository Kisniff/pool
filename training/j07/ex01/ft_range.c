/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 10:55:00 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/16 09:44:28 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		*result;

	i = 0;
	if (min >= max)
	{
		result = 0;
		return (result);
	}
	result = (int*)malloc(sizeof(int) * (max - min));
	while (max > min)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}
