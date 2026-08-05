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
int main()
{

}