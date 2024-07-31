#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	check_anagram(char *str, char *sts)
{
	char	c;
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		j = 0;
		while (sts[j] != '\0)
		{

		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	*str;
	char	*sts;
	int	one;
	int	two;

	if (argc == 3)
	{
		str = argv[1];
		sts = argv[2];
		one = ft_strlen(str);
		two = ft_strlen(two);
		if (one == two)
			check_anagran(str, sts);
		else
			write(1, "words are not anagrams", 22);
	}
	write(1, "\n", 1);
	return (0);
}
