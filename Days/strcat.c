char    *ft_strcat(char *dest, char *src, unsigned int n)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    j = 0;
    while (dest[i] != '\0')
        i++;
    while (src[j] != '\0' && j < n)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}
#include <stdio.h>
int main()
{
    char dest[10] = "hello";
    char *src = " world";
    printf("%s\n", ft_strcat(dest, src, 3));
}