int ft_iterative_power(int nb, int power)
{
    if (power < 0)
        return 0;
    if (power == 0)
        return 1;
    if (nb == 0)
        return 0;
    int    result;
    result = 1;
    while(power > 0)
    {
        result = result * nb;
        power--;
    }
    return(result);
}
#include<stdio.h>
int    main()
{
    printf("%d\n", ft_iterative_power(5, 2));
}