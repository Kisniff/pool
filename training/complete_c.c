/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complete_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 09:09:00 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/15 12:24:44 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	power_it(int nb, int pw)
{//OP
	if (pw == 0)
		return (1);
	else if (pw == 1)
		return (nb);
	return (nb * power_it(nb, pw - 1));
}

int	to_ten(char *number, char *base_from, char *base_to)
{//OP
	int		power;
	int		produit; //nature de la base 
	int		nb; //mon nombre en int
	int		tmp; //compteur sur chaine
	int		i;// compteur sur nombre

	i = -1;
	nb = 0;
	tmp = -1;
	produit = -1;
	power = -1;
	while (base_from[++produit]);// on trouve la taille de la base de depart qui servira de poduit
	while (number[++power]);// on trouve la taille du nombre de depart qui servira de puissance
	power = power - 1;
	while (number[++i])
	{
		while (base_from [++tmp] != number[i]);
		nb = nb + tmp * power_it(produit, power);
		power--;
		tmp = -1;
	}
	return (nb);
}

char	assign(int produit2, char *str)
{
	char	c;
	int		i;

	c = str[produit2];
	return (c);
}

char	*to_base(int number, char *base_to)
{
	int		power;//puissance pour calcul
	int		result;//resultat temporaire lors de calculs
	int		i; // produit pour resultat
	int		produit;
	int		produit2;
	char	*resultat;
	
	produit = -1;
	power = -1;
	result = 0;
	i = 0;
	while (base_to[++produit]);
	while (number / power_it(produit, ++power) > 1)
	resultat = malloc(sizeof(char) * power + 1);
	power--;
	while (number > 0)
	{
		produit2 = number / power_it(produit, power);
		result = result + produit2 * power_it(produit, power);
		resultat[i] = assign(produit2, base_to);
		number = number % power_it(produit, power);
		power--;
		i++;
	}
	return (resultat);//mon return est mauvais
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		number;
	char	*result;

	number = 0;
	if (base_from == base_to)
		return (nbr);
	number = to_ten(nbr, base_from, base_to);
	result = to_base(number, base_to);
	return (result);
}

int	main(int ac, char **av)
{
	(void)ac;
	printf("resultat -> %s\n", ft_convert_base(av[1], av[2], av[3]));
	return (0);
}
