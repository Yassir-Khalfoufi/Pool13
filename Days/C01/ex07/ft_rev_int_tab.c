#include<stdio.h>
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
		*right = *left;
		*left = swap;
		left++;
		right--;
	}
}
int main()
{
    int tab[] = {1, 2, 3, 4, 5};
    int size = 5;
    int i;

    // print before
    i = 0;
    printf("Before: ");
    while (i < size)
    {
        printf("%d ", tab[i]);
        i++;
    }
    printf("\n");

    ft_rev_int_tab(tab, size);

    // print after
    i = 0;
    printf("After:  ");
    while (i < size)
    {
        printf("%d ", tab[i]);
        i++;
    }
    printf("\n");

    return (0);
}




