/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 09:38:04 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/11 09:54:44 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_antidote(int i, int j, int k)
{
	if (i <= j && j <= k)
		return (j);
	else if (k <= j && j <= i)
		return (j);
	else if (j <= k && k <= i)
		return (k);
	else if (i <= k && k <= j)
		return (k);
	else if (j <= i && i <= k)
		return (i);
	else if (k <= i && i <= j)
		return (i);
	return (0);
}
