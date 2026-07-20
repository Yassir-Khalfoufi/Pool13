#include<unistd.h>
void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
int	main()
{
	int	nbr;
	int *x1 = &nbr;
	int **x2 = &x1;
	int ***x3 = &x2;
	int ****x4 = &x3;
	int *****x5 = &x4;
	int ******x6 = &x5;
	int *******x7 = &x6;
	int ********x8 = &x7;
	int *********x9 = &x8;
	ft_ultimate_ft(x9);
	write(1, &nbr, 1);
}
