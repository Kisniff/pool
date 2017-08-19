#include <unistd.h>
#include <stdio.h>
#include "../../j02/ex00/ft_print_alphabet.c"
#include "../../j02/ex01/ft_print_reverse_alphabet.c"
#include "../../j02_actual/ex02/ft_print_numbers.c"
#include "../../j02/ex03/ft_is_negative.c"
#include "../../j02/ex04/ft_print_comb.c"
#include "../../j02_actual/ex06/ft_putnbr.c"
#include "../../j02/ex07/ft_print_combn.c" 
#include "../../j02/ex05/ft_print_comb2.c"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int	main()
{
	int				i;
	unsigned int	u;

	i = -2147483648;
	//ft_print_alphabet();
	//ft_print_reverse_alphabet();
	//ft_print_numbers();
//	ft_is_negative(i);
//	ft_print_comb();
	//ft_print_combn();
	//ft_print_comb2();
	ft_putnbr(i);
	//printf("%u", is_neg(i));

	return(0);
}
