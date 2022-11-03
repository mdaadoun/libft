#include "../libft.h"

/*
** checks if c is an alphabetic character with ft_isupper & ft_islower
*/
int	ft_isalpha(int c)
{
	if (ft_isupper(c) || ft_islower(c))
		return (1024);
	return (0);
}
