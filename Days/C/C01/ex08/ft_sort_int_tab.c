void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;
	i = 0;
	while (i  < size - 1)
	{
		j = 0;
		while(j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
		j++;
		}
	i++;
	}
}
#include<stdio.h>
int	main()
{
	int	tab[] = {7,2,3,9,2,4};
	int	size = 6;
	int	i = 0;
	ft_sort_int_tab(tab, size);
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	return(0);
}
