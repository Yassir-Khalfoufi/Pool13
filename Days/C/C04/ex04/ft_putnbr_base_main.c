#include<unistd.h>
int	base_is_valid(char	*base)
{
	int	i;
	int	j;
	i = 0;
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
void	convert(unsigned int	nbr, char	*base, int	len)
{
	if(nbr >=(unsigned int) len)
		convert(nbr / len, base, len);
	write(1, &base[nbr % len], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;
	unsigned int	n;
	if(!base_is_valid(base))
		return;
	len = 0;
	while(base[len])
		len++;
	if(nbr < 0)
	{
		write(1, "-", 1);
		n = (unsigned int)(-nbr);
	}
	else
		n = (unsigned int) nbr;
	convert(n, base, len);
}
int	main()
{
	ft_putnbr_base(1337, "poneyvif");
}
