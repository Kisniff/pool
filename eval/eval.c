#include <stdio.h>
#define IDX1 idx_1
#define IDX2 idx_2

int	c_parenthesis_idx(char *str)
{
	int	idx_1;
	int	idx_2;

	IDX1 = -1;
	while (str[++IDX1])
	{
		if (str[IDX1] == ')')
			return (IDX1); //on renvoie l'adresse de la premiere parenthese trouvee
	}
	return (0);
}

int	o_parenthesis_nbr(char *str)
{
	int	idx_1;
	int	idx_2;

	IDX1 = -1;
	IDX2 = 0;
	while (str[++IDX1])
		IDX2 = (str[IDX1] == '('? IDX2 + 1 : IDX2);
	return (IDX2);
}

int	o_parenthesis_idx(char *str)
{
	int	idx_1;
	int	idx_2;

	IDX1 = -1;
	while (str[++IDX1] && IDX1 != o_parenthesis_nbr(str))
	{
		printf("parnethese ouverte indexe -> %d\n", IDX2);
		IDX2 = (str[IDX2] == '(' ? IDX2 + 1 : IDX2);
	}
	return (IDX1);
}

int	eval_expr(char *str)
{
	int IDX1; 
	int IDX2;// indexe premiere parenthese fermee

	IDX1 = o_parenthesis_idx(str);
	IDX2 = c_parenthesis_idx(str);
	printf("parnethese fermee indexe -> %d\n", IDX2);
	return (0);
}

int	main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	eval_expr(av[1]);
	return (0);
}