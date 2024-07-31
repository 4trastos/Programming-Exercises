#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	ft_write(int numb)
{
	char *str;

	str = "0123456789";
	if (numb > 9)
		ft_write(numb / 10);
	write(1, &str[numb % 10], 1);
}

int	main(void)
{
	int	numb;

	numb = 1;
	while (numb <= 100)
	{
		if (numb % 3 == 0 && numb % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (numb % 3 == 0)
			write(1, "fizz", 4);
		else if (numb % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_write(numb);
		write(1, "\n", 1);
		numb++;
	}
	return (0);
}
