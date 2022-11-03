#include "../libft.h"

/*
** converts the c-string nptr to int.
** -48 is ascii offset for char 0
*/
int	set_neg(int isneg, int nb)
{
	if (isneg)
		return (-nb);
	else
		return (nb);
}

/*
 * convert a string to an integer
 */
int	ft_atoi(const char *nptr)
{
	int	result;
	int	isneg;
	int	ispos;

	result = 0;
	isneg = 0;
	ispos = 0;
	while (*nptr++)
	{
		if (ft_isspace(*(nptr - 1)) && !result && !ispos && !isneg)
			;
		else if (*(nptr - 1) == '+' && !result && !ispos && !isneg)
			ispos = 1;
		else if (*(nptr - 1) == '-' && !result && !ispos && !isneg)
			isneg = 1;
		else if (ft_isdigit(*(nptr - 1)))
			result = result * 10 + *(nptr - 1) - 48;
		else
			return (set_neg(isneg, result));
	}
	return (set_neg(isneg, result));
}
