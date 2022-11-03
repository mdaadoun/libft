
#include "../libft.h"

/*
** same as memcpy but use a temporary buffer
** to avoid overlapping errors.
** Need to be rewritten with calloc for buffer, 
**		now use a reverse copy
**      when the adress of destination is > adress of source 
** 		(replace with strdup ?)
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*cast_dst;
	char	*cast_src;

	if (!dest && !src)
		return (NULL);
	i = 0;
	cast_dst = (char *) dest;
	cast_src = (char *) src;
	if (cast_dst > cast_src)
		while (n--)
			cast_dst[n] = cast_src[n];
	else
		while (i++ < n)
			cast_dst[i - 1] = cast_src[i - 1];
	return (dest);
}
