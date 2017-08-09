#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../ft_putchar.c"
#include "../../j07/ex00/ft_strdup.c"
#include "../../j07/ex01/ft_range.c"
#include "../../j07/ex02/ft_ultimate_range.c"
#include "../../j07/ex03/ft_concat_params.c"
#include "../../j07/ex04/ft_split_whitespaces.c"
#include "../../j07/ex05/ft_print_word_tables.c"

int	main(int argc, char **argv)
{
	char test[] = "salut toi, tu vas bien?";
	char **test2;
	 
	int	i;
	int	a;
	int	b;

	i = word_count(test);
	a = 5;
	b = 0;
	//dest = ft_strdup(test);
	//printf("%s", dest);
	//ft_range(3, 10);
	//printf("%d", ft_ultimate_range(iest, 3, 1));
//	printf("%s", ft_concat_params(argc, argv));
	ft_split_whitespaces(test);
	ft_print_word_tables(ft_split_whitespaces(test));
	return (0);
}
