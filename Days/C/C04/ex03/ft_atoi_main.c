#include<stdio.h>
int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;
	i = 0;
	sign = 1;
	result = 0;
	if(!str)
		return(0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sign = -sign;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return(result * sign);
}
int	main()
{
	printf("%d\n", ft_atoi("    ---+--+1234ab567"));
}
