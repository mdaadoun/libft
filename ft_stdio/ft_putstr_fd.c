#include "../libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	length;

	if (s)
	{
		length = ft_strlen(s);
		write(fd, s, length);
	}
}
