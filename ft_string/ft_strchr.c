
#include "../libft.h"

/*
** return first occurence of c byte in c-string s.
*/
char	*ft_strchr(const char *s, int c)
{
	return ((char *) ft_memchr((void *) s, c, ft_strlen(s) + 1));
}
