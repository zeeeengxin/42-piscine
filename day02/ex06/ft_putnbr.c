#include <unistd.h>

void ft_putnbr(int nb)
{
	if (nb == -2147483648)
		ft_putstr("-2147483648")
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb); //putnbr(-nb), don't just nb = -nb
	}
	else if (nb < 10)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0'); //remember to + '0'
	}
}