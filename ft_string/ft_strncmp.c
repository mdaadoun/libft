
#include "../libft.h"

/* 
** compares the two strings s1 and s2, return s1 - s2 difference
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while (*s2 && *s1 && (*s1 == *s2) && i < n - 1)
	{
		s1++;
		s2++;
		i++;
	}
	return ((unsigned char) *(s1) - (unsigned char) *(s2));
}
