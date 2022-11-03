
#include "../libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	length;

	if (s)
	{
		length = ft_strlen(s);
		write(fd, s, length);
		write(fd, "\n", 1);
	}
}
