#include "../libft.h"

/*
** checks if c is an alphanumeric character with ft_isalpha & ft_isdigit
*/
int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (8);
	return (0);
}
