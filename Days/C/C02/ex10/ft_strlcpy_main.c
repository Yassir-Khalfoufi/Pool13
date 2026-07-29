#include<stdio.h>
int	ft_strlen(char	*str)
{
	int	i;
	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}
unsigned	int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	i = 0;
	if(size > 0)
	{
		while(src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return(ft_strlen(src));
}
int	main()
{
	char	src[] = "Hello World";
	char	dest[8];
	printf("%d\n", ft_strlcpy(dest, src, 7));
}
