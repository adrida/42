#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

//ENLEVER FT PUTCHAR AVT RENDU

void	ft_print_alphabet(void)
{
	int i;
	i = 'a';

	while (i <= 'z')
	{
		ft_putchar(i);
		i++;
	}
}

int	main()
{
	ft_print_alphabet();
	return 0;
}
