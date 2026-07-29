int	base_is_valid(char *base)
{
	int	i;
	int	j;
	i = 0;
	if(!base)
		return(0);
	if(base[0] == '\0' || base[1] == '\0')
		return(0);
	while(base[i])
	{
		if(base[i] == '-' || base[i] == '+')
			return(0);
		j = i + 1;
		while(base[j])
		{
			if(base[i] == base[j])
				return(0);
			j++;
		}
		i++;
	}
	return(1);
}
int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	j;
	int	sign;
	int	result;
	int	len;
	i = 0;
	sign = 1;
	result = 0;
	len = 0;
	while(base[len])
		len++;
	if(!base_is_valid(base))
		return(0);
	if(!str)
		return(0);
	while((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while(str[i] == '-' || str[i] == '+')
	{
	
		if(str[i] == '-')
			sign = -sign;
		i++;
	}
	while(str[i])
	{
		j = 0;
		while(j < len)
		{
			if(str[i] == base[j])
			{
				result = result * len + j;
				break;
			}
			j++;
		}
		if(j == len)
			break;
		i++;
	}
	return(result * sign);
}
#include<stdio.h>
int	main()
{
	printf("%d\n", ft_atoi_base("nyfo", "poneyvif"));
}
