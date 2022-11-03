#include "../libft.h"

/*
** 	allocate memory of number*size and set each value to 0
**	return the pointer to first area of this memory
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb > 4294967296 && size > 4294967296)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
