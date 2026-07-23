#include<stdio.h>
char	*ft_strcapitalize(char *str)
{
	int	i;
	int	prev;
	i = 0;
	prev = 1;
	while(str[i] != '\0')
	{
	if(str[i] >= 'a' && str[i] <= 'z' && prev == 1)
		str[i] -= 32;
	else if(str[i] >= 'A' && str[i] <= 'Z' && prev == 0)
		str[i] += 32;
	if(str[i] == ' ')
		prev = 1;
	else
		prev = 0;
	i++;
	}
	return(str);
}
int	main()
{
	char	str[] = "kALBON wAer";
	printf("%s\n", ft_strcapitalize(str));
}

