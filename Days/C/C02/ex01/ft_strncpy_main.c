char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	i = 0;
	while(src[i] != '\0' && n > i)
	{
		dest[i] = src[i];
		i++;
	}
	while(i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return(dest);
}
#include<stdio.h>
int main()
{
    char src[] = "hello world";
    char dest[20];
    printf("%s\n", ft_strncpy(dest, src, 5));
}
