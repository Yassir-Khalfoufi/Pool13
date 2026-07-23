int ft_strlen(char  *str)
{
    int i;
    i = 0;
    while(str[i] != '\0')
        i++;
    return(i);
}
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int    i;
    unsigned int    dlen;
    i = 0;
    dlen = ft_strlen(dest);
    if(dlen >= size)
        return(size + ft_strlen(src));
    while(src[i] != '\0' && dlen + i < size - 1)
    {
        dest[dlen + i] = src[i];
    i++;
    }
    dest[dlen + i] = '\0';
    return(dlen + ft_strlen(src));

}