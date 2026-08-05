#include <stdlib.h>
int ft_ultimate_range(int   **range, int min, int max)
{
    int    i;
    i = 0;
    if (min >= max)
    {
        *range = NULL;
        return (0);
    }
    *range = malloc ((max - min) * 4);
    if (!*range)
        return (-1);
    while (i < max - min)
    {
        (*range)[i] = min + i;
        i++;
    }
    return (max - min);
}
#include <stdio.h>
int	main(void)
{
	int	*range;
	int	size;

	// normal case
	range = NULL;
	size = ft_ultimate_range(&range, 6, 13);
	printf("size: %d\n", size);
	int i = 0;
	while (i < size)
	{
		printf("%d\n", range[i]);
		i++;
	}
	free(range);

	// min >= max case
	range = NULL;
	size = ft_ultimate_range(&range, 13, 6);
	printf("size: %d\n", size);
	printf("range is %s\n", range == NULL ? "NULL" : "not NULL");

	return (0);
}