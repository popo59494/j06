#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	
	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	if (s1[i] > s2[i])
		return (1);
	if (s1[i] < s2[i])
		return (-1);
	return(0);
}

void	ft_sort_params(int argc, char **argv)
{
	int i;
	int j;
	char *str;
	
	i = 0;
	j = 1;
	while (i < argc)
	{
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) == 1)
			{
				str = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = str;
			}
		j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{	
	int k;

	k = 1;
	ft_sort_params(argc, argv);
	while (k < argc)
	{
		ft_putstr(argv[k]);
		ft_putchar('\n');
		k++;
	}
	return (0);
}
