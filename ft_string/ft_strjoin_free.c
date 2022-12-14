
#include "../libft.h"

/*
** flag(0) to free all, flag(1) to free s1, flag(2) to free s2.
*/
char	*ft_strjoin_free(char *s1, char *s2, int flag)
{
	char	*new;

	if (!s2)
		s2 = "";
	new = ft_strjoin(s1, s2);
	if (flag == 1 || flag == 0)
		free(s1);
	if (flag == 2 || flag == 0)
		free(s2);
	return (new);
}
