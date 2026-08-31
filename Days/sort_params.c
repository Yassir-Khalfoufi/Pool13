#include <unistd.h>

void    ft_print_word(char *str)
{
    int    i;

    i = 0;
    while (str[i] != '\0')
    {
        write (1, &str[i], 1);
        i++;
    }
    write (1, "\n", 1);
}

int    ft_strcmp(char *s1, char *s2)
{
    int    i;

    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        i++;
    }
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int    main(int argc, char **argv)
{
    int        i;
    char    *tmp;

    i = 1;
    while (i < argc - 1)
    {
        if (ft_strcmp(argv[i], argv[i + 1]) > 0)
        {
            tmp = argv[i];
            argv[i] = argv[i + 1];
            argv[i + 1] = tmp;
            i = 0;
        }
        i++;
    }
    i = 1;
    while (i < argc)
    {
        ft_print_word(argv[i]);
        i++;
    }
    return (0);
}