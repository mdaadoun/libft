
#include "../libft.h"

/*
** concatenate a string src to dst and return the length of the complete string
*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;

	len_dst = ft_strlen(dst);
	if (!size)
		return (ft_strlen(src));
	if (size < len_dst)
		return (ft_strlen(src) + size);
	while (len_dst < size - 1 && *src)
		dst[len_dst++] = *src++;
	dst[len_dst] = '\0';
	return (len_dst + ft_strlen(src));
}
