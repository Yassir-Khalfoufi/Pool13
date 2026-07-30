void	ft_rev_int_tab(int	*tab, int	size)
{
	int	*left;
	int	*right;
	int	swap;
	left = tab;
	right = left + size - 1;
	while(left < right)
	{
		swap = *left;
		*left = *right;
		*right = swap;
		left++;
		right--;
	}
}
#include<stdio.h>
int	main()
{
	int	tab[] = {1,3,3,7};
	int	size = 4;
	ft_rev_int_tab(tab, size);
	for(int i=0; i < size; i++)
		printf("%d\n", tab[i]);
}
