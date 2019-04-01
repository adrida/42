#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

int main(int ac, char **av)
{
	ft_is_negative(atoi(av[1]));
	return 0;
}
