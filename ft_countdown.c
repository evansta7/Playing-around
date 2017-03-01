#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main()
{
	int	number;

	number = 57;
	while (number >= 48)
	{
		ft_putchar(number);
		number--;
	}
	ft_putchar('\n');
	return (0);
}
