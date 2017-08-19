/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleroux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 12:12:28 by pleroux           #+#    #+#             */
/*   Updated: 2017/08/19 17:12:05 by pde-soul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "print.h"
#include "parse.h"

int	main(void)
{
	/* 1) Recuperer tout les caracteres sur STDIN dans buffer
	 * 2) Test du buffer (correspondance avec une colle)
	 *		Si faux : affichage aucune\n
	 * 3) Comptage du nombre de \n pour connaitre la hauteur
	 * 4) Comptage du nombre de caractere avant le 1er \n
	 * 5) Test des 2 premiers caracteres de la derniere ligne pour connaitre la colle
	 * 6) Affichage [num colle] [x] [y] \n
	 * */

	char	*str;
	int		x;
	int		y;
	int		colle;
	int		num;

	get_read_str(&str);

	/* Test du 0, 0  ? */

	y = parse_height(str);
	x = parse_lenght(str);

	num = check_num_colle(x, y)
	print_colle(x, y, num);

	return (0);
}
