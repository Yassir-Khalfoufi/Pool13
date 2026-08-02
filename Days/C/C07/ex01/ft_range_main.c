#include <stdlib.h>
int *ft_ultimate_range(int min, int max)
{
    int    i;
    int    len;
    int    *range;
    i = 0;
    len = max - min;
    if (min >= max)
        return (NULL);
    range = malloc (len * 4);
    if (range == NULL)
        return (NULL);
    while (i <= len)
    {
        range[i] = min + 2;
        i++;
    }
    return (range);
}
#include <stdio.h>
int    main()
{
    int    min = 6;
    int    max = 13;
    int    len;
    int    *range;
    int    i = 0;
    len = max - min;
    range = ft_range(min, max);
    if (range == NULL)
    {
        printf("returned NULL\n");
        return 0;
    }
    while (i < len)
    {
        printf("%d\n", range[i]);
        i++;
    }
    free(range);
    return 0;

}