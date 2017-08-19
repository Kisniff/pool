/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen_colle.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleroux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 18:17:33 by pleroux           #+#    #+#             */
/*   Updated: 2017/08/19 18:58:19 by pleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gen_colle.h"

char	*colle00(int x, int y, char *tab)
{
	char car[3][3];

	car[0][0] = 'o';
	car[0][1] = '-';
	car[0][2] = 'o';
	car[1][0] = '|';
	car[1][1] = ' ';
	car[1][2] = '|';
	car[2][0] = 'o';
	car[2][1] = '-';
	car[2][2] = 'o';
	return (rush(x, y, car, tab));
}

char	*colle01(int x, int y, char *tab)
{
	char car[3][3];

	car[0][0] = '/';
	car[0][1] = '*';
	car[0][2] = '\\';
	car[1][0] = '*';
	car[1][1] = ' ';
	car[1][2] = '*';
	car[2][0] = '\\';
	car[2][1] = '*';
	car[2][2] = '/';
	return (rush(x, y, car, tab));
}

char	*colle02(int x, int y, char *tab)
{
	char car[3][3];

	car[0][0] = 'A';
	car[0][1] = 'B';
	car[0][2] = 'A';
	car[1][0] = 'B';
	car[1][1] = ' ';
	car[1][2] = 'B';
	car[2][0] = 'C';
	car[2][1] = 'B';
	car[2][2] = 'C';
	return (rush(x, y, car, tab));
}

char	*colle03(int x, int y, char *tab)
{
	char car[3][3];

	car[0][0] = 'A';
	car[0][1] = 'B';
	car[0][2] = 'C';
	car[1][0] = 'B';
	car[1][1] = ' ';
	car[1][2] = 'B';
	car[2][0] = 'A';
	car[2][1] = 'B';
	car[2][2] = 'C';
	return (rush(x, y, car, tab));
}

char	*colle04(int x, int y, char *tab)
{
	char car[3][3];

	car[0][0] = 'A';
	car[0][1] = 'B';
	car[0][2] = 'C';
	car[1][0] = 'B';
	car[1][1] = ' ';
	car[1][2] = 'B';
	car[2][0] = 'C';
	car[2][1] = 'B';
	car[2][2] = 'A';
	return (rush(x, y, car, tab));
}

/*#include <stdio.h>
int main(void)
{
	char tab[100];

	printf("%s", colle00(4,4, tab));
	printf("%s", colle01(6,6, tab));
	printf("%s", colle02(9,8, tab));
	printf("%s", colle03(9,7, tab));
	printf("%s", colle04(6,6, tab));
	return (0);
}*/
