
#include "../libft.h"

/*
** Copy n times c in the memory areas of s
*/
void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*cast_s;

	cast_s = (char *) s;
	i = 0;
	while (i++ < n)
		cast_s[i - 1] = c;
	return (s);
}
