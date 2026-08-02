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
    dest = malloc (size );
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
#include<stdio.h>
int main()
{
    char    *original;
    char    *copy;
    original = "hello";
    copy = ft_strdup(original);
    printf("original : %s\n", original);
    printf("copy : %s\n", copy);

    copy[0] = 'Y';
	printf("after modifying copy:\n");
	printf("original : %s\n", original);
	printf("copy     : %s\n", copy);

    printf("original address : %p\n", original);
	printf("copy address     : %p\n", copy);

	free(copy);
	return (0);
}