#include<unistd.h>
void	ft_putchar(char	c)
{
	write(1, &c, 1);
}
void	ft_print_combn(void)
{
	int	a;
	int	b;
	a = '0';
	while (a <= '8')
	{
		b = a + 1;
		while(b <= '9')
		{
			ft_putchar(a);
			ft_putchar(b);
			if(a != '8')
				write(1, ", ", 2);
			b++;
		}
		a++;
	}

}
int	main()
{
	ft_print_combn();
}
