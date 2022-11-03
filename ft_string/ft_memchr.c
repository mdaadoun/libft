
#include "../libft.h"

/*
** Scan n bytes in the memory areas of s to find the c byte.
** Return the pointer address in s to the first occurence of c.
** Return 0 if no match is found.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*cast_s;

	cast_s = (char *) s;
	while (n--)
	{
		if (*(cast_s) == (char) c)
			return ((void *) cast_s);
		cast_s++;
	}
	return (0);
}
