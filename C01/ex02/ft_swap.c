void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	*ptra = &a;
	int	*ptrb = &b;

	a = 1;
	b = 2;

	printf("a : %d, b : %d\n", a, b);

	ft_swap(ptra, ptrb);

	printf("a : %d, b : %d\n", a, b);	
}
*/
