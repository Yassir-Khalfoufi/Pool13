int ft_strlen(char  *str)
{
    int i;
    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return(i);
}
char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int    i;
    unsigned int    dlen;
    i = 0;
    dlen =  ft_strlen(dest);=
    while(src[i] != '\0' && i < nb)
    {
        dest[dlen + i] = src[i];
    i++;
    }
    dest[dlen + i] = '\0';
    return(dest);
}
#include <stdio.h>

int main()
{
    char dest[20] = "HELLO";
    ft_strncat(dest, "world!!!", 2);
    printf("%s\n", dest);  // Expected: Hello, world
    return 0;
}