#include "../libft.h"

/*
** convert c char if uppercase to lowercase
*/
int	ft_tolower(int c)
{
	if (ft_isupper(c))
		c += 32;
	return (c);
}
