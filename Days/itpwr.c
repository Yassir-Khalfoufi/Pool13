int ft_iterative_power(int nb, int power)
{
    int res;

    res = 1;
    if (power < 0)
        return (0);
    else if (power == 0)
        return (1);
    while (power > 0)
    {
        res = res * nb;
        power--;
    }
    return (res);
}
#include <stdio.h>
int main(void)
{
    printf("%d\n", ft_iterative_power(5, 3));
}