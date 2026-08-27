int ft_strcmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;
    i = 0;
    if (n == 0)
        return 0;
    while ((unsigned char)s1[i] && (unsigned char)s2[i] && i < n)
    {
        if (s1[i] != s2[i])
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        i++;
    }
    if (i == n)
        return (0);
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
#include <stdio.h>
int main()
{
    printf("%d\n", ft_strcmp("abca", "abc", 3));
}