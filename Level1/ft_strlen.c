#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	write(1, &i, 1);
	return (i);
}

int	main()
{
	char str[] = "five!";
	ft_strlen(str);
	return (0);
}
