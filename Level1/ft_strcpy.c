#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		ft_putchar(s1[i]);
		i++;
	}
	s1[i] = s2[i];
	ft_putchar('\n');
	return (s1);
}

int	main()
{
	char s2[] = "hello";
	char s1[100];
	ft_strcpy(s1, s2);
	return (0);
}
