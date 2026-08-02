#include <stdlib.h>
char *ft_strdup(char *src)
{
    int    i;
    int    size;
    char    *dest;
    i = 0;
    size = 0;
    while(src[size] != '\0')
        size++;
    dest = malloc (size + 1);
    if (!dest)
        return (NULL);
    while (i < size)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}