int ft_is_prime(int nb)
{
    if (nb < 2)
        return 0;
    if (nb == 2)
        return 1;
    int    i;
    i = 2;
    while (i  < nb)
    {
        if (nb % i == 0)
            return 0;
        i++;
    }
    return(1);
}