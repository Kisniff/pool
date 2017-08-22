/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 14:27:07 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/22 10:37:23 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strcmp(int s1, int s2)
{
	if (s1 != s2)
		return (s1 - s2);
	return (0);
}

int	ft_is_sort_d(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i + 1 < length)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			i++;
		else
			return (0);
	}
	return (1);
}

int	ft_is_sort_i(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i + 1 < length)
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			i++;
		else
			return (0);
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	if (tab == NULL || length <= 0 || f == NULL)
		return (0);
	if (ft_is_sort_d(tab, length, f) == 0 && ft_is_sort_i(tab, length, f) == 0)
		return (0);
	return (1);
}
