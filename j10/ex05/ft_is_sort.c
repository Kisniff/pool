/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 14:27:07 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/17 12:29:42 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(int *s1, int *s2)
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

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	count;

	i = 0;
	while(tab[i + 1])
	{
		if (f(tab[i], tab[i + 1]))
		{
		}
	}
	return (count);
}

int	main(int ac, char **av)
{
	(void)ac;
	int (*f)(int, int);

	f = &ft_strcmp;
	return (0);
}
