/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 10:55:00 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/11 15:26:53 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		*result;

	i = 0;
	result = (int*)malloc(sizeof(int) * (max - min));
	while (i < (max - min))
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}
