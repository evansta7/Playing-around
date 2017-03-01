#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main()
{
	char first;
	char second;
	int i;

	first = 'a';
	second = 'B';
	while (i <= 12)
	{
		ft_putchar(first);
		ft_putchar(second);
		first = first + 2;
		second = second + 2;
		i++;
	}
	ft_putchar('\n');
	return (0);
}
