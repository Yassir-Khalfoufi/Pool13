#include<unistd.h>
void	ft_ultimate_div_mod(int *a, int *b)
{	
	if(*b != 0)
	{
		int	temp;
		temp = *a;
		*a = temp / *b;
		*b = temp % *b;
	}
}
#include<stdio.h>
int	main()
{
	int	a = 5;
	int	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("div : %d, mod : %d\n", a, b);
}
