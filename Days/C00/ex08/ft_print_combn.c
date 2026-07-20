#include<unistd.h>
void	ft_putchar(char	c)
{
	write(1, &c, 1);
}
void	ft_print_combn(int n)
{
	n = 1;
	while(n <= 89)
	{
		ft_putchar(n / 10 + '0');
		ft_putchar(n % 10 + '0');
		if(n != 89)
			write(1, ", ", 2);
		n++;
	}
}
int	main(void)
{
	ft_print_combn(3);
}
