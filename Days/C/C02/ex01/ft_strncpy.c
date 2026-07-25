#include<stdio.h>
#include<string.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	i = 0;
	while(src[i] != '\0' && n > i)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while(n >= i)
	{
		dest[i] = '\0';
		i++;
	}
	return(dest);
}
