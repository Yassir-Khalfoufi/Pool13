#include<unistd.h>
void	ft_ft(int *nbr)
{
	*nbr = 42;
}
int	main()
{
	int nbr;
	ft_ft(&nbr);
	write(1, &nbr, 1);
}
