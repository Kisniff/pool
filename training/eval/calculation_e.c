/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculation.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 10:59:44 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/19 11:27:43 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>//a degager

int	operations(int idx, char *str)
{
	int		idx_calcul;
	char	*calcul;
	
	idx_calcul = -1;
	//printf("debut du premier calcul -> %d\n", idx + 1);
	while (str[idx] != ')' && str[++idx_calcul])
		idx++;
	idx_calcul--;
	//printf("idx_max du calcul -> %d\n", idx_calcul);
	return (0);
}
