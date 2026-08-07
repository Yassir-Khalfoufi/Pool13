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
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
			prev = 0;
		else
			prev = 1;
		i++;
	}
	return(str);
}
