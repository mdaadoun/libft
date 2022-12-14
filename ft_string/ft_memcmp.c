
#include "../libft.h"

/*
**  compares the first n bytes of s1 and s2
**  return the difference
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cast_s1;
	unsigned char	*cast_s2;

	cast_s1 = (unsigned char *) s1;
	cast_s2 = (unsigned char *) s2;
	while (n--)
	{
		if (*(cast_s1) != *(cast_s2))
			return (*(cast_s1) - *(cast_s2));
		cast_s1++;
		cast_s2++;
	}
	return (0);
}
