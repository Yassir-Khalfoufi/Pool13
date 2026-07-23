int	ft_strlen(char	*str)
{
	int	i;
	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}
char *ft_strcat(char *dest, char *src)
{
	int	i;
	int	dlen;
	i = 0;
	dlen = ft_strlen(dest);
	while(src[i] != '\0')
	{
		dest[dlen + i] = src[i];
	i++;
	}
	dest[dlen + i] = '\0';
	return(dest);
}
