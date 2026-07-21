#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	bs;
	char	hex[16] = "0123456789abcdef";
	char	a;
	char	b;

	i = 0;
	bs = '\\';
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, &bs, 1);
			a = hex[(unsigned char)str[i] / 16];
			b = hex[(unsigned char)str[i] % 16];
			write(1, &a, 1);
			write(1, &b, 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main()
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	return (0);
}	
