
#include "../libft.h"


/*
** return a pointer to new string duplicate of s
*/
char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*str;

	len = ft_strlen(s) + 1;
	str = ft_calloc(len, sizeof(char));
	if (!str)
		return (0);
	ft_strlcpy(str, s, len);
	return (str);
}
