#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	printf("%i", i);
	return (i);
}

int	main()
{
	char str[] = "five!";
	ft_strlen(str);
	return (0);
}
