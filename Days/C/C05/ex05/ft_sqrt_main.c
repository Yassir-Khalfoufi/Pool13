int ft_sqrt(int nb)
{
    if (nb < 0)
        return 0;
    if (nb == 0)
        return 0;
    if (nb == 1)
        return 1;
    int    i;
    i = 1;
    while(i * i < nb)
    {
        i++;
        if (i * i == nb)
            return (i);
    }
    return 0;
}
#include<stdio.h>
int    main()
{
    printf("%d\n", ft_sqrt(10));
}