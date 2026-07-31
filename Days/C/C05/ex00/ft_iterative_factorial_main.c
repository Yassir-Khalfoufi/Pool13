int ft_iterative_factorial(int nb)
{
    if(nb < 0)
        return(0);
    if(nb == 0)
        return(1);
    int    result;
    int    i;
    i = nb;
    result = 1;

    while(i > 1)
    {
        result = result * i;
        i--;
    }
    return(result);
}
#include<stdio.h>
int main()
{
    printf("%d\n", ft_iterative_factorial(10));
}