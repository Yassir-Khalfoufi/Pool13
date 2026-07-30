#include<unistd.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if(b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
#include<stdio.h>
int	main()
{
	int	div;
	int	mod;
	int	a = 8;
	int	b = 3;
	ft_div_mod(a, b, &div, &mod);
	printf("div : %d, mod: %d\n", div, mod);
}
