
#include "../libft.h"

/*
** return last occurence of c in s 
*/
char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*cast_s;

	len = (int) ft_strlen(s);
	cast_s = (char *) s;
	while (len-- >= 0)
		if (cast_s[len + 1] == (char) c)
			return ((char *) &cast_s[len + 1]);
	return (0);
}
