#include <stdlib.h>
int *ft_range(int min, int max)
{
    int    i;
    int    len;
    int    *range;
    i = 0;
    len = max - min;
    if (min >= max)
        return (NULL);
    range = malloc (len * 4);
    if (!range)
        return (NULL);
    while (i < len)
    {
        range[i] = min + i;
        i++;
    }
    return (range);
}