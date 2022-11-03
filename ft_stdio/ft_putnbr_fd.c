
#include "../libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	size_t	nbr;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = (size_t) n * -1;
	}
	else
		nbr = n;
	if (nbr >= 10)
	{
		ft_putnbr_fd(nbr / 10, fd);
	}
	ft_putchar_fd('0' + nbr % 10, fd);
}
