#include<stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	i = 0;
	if (n == 0)
		return(0);
	while(i < n  && s1[i] != '\0' && s2[i] != '\0')
	{
		if(s1[i] != s2[i])
			return((unsigned char)s1[i] - (unsigned char) s2[i]);
	i++;
	}
	return((unsigned char)s1[i] - (unsigned char) s2[i]);
}
int	main()
{
	printf("%d\n", ft_strncmp("abc", "abcgf", 190));
}
