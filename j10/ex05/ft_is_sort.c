/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 14:27:07 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/13 14:37:45 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_one(char *tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (tab[i] == '1')
			return (1);
		i++;
	}
	return (0);
}

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	count;
//FONCTION A FAIRE
	return (count);
}

int	main(int ac, char **av)
{
	(void)ac;
	printf("%d", ft_any(av, &is_one));
	return (0);
}
