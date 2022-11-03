#include "../libft.h"

/*
**	memset s string for n bytes with 0 as default value.
*/
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
