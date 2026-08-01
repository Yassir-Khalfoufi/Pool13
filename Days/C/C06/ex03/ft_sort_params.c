#include <unistd.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	i = 0;
	while(s1[i] != '\0' && s2[i] != '\0')
	{
		if(s1[i] != s2[i])
			return((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return((unsigned char)s1[i] - (unsigned char)s2[i]);
}
int    main(int    argc, char   **argv)
{
    int    i;
    int    j;
    int    pass;
    i = 1;
    pass = 0;
    if (argc < 2)
        return 0;
    while (pass < argc - 1)
    {   
        i = 1;
        while (i < argc - 1)
        {
            if(ft_strcmp(argv[i], argv[i + 1]) > 0)
            {
                char    *temp;
                temp = argv[i];
                argv[i] = argv[i + 1];
                argv[i + 1] = temp;
            }
            i++;
        }
        pass++;
    }
    i = 1;
    while(i < argc)
    {
        j = 0;
        while (argv[i][j] != '\0')
        {
            write(1, &argv[i][j], 1);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
}