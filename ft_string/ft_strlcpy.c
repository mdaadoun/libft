#include "../inc/libft.h"

/*
** copy a string src to dst and return the length of the copied string
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	length;
	char	*cast_dst;
	char	*cast_src;

	cast_dst = (char *) dst;
	cast_src = (char *) src;
	length = ft_strlen(cast_src);
	if (size > length)
		size = length + 1;
	if (!size)
		return (length);
	while (--size)
		*cast_dst++ = *cast_src++;
	*cast_dst = '\0';
	return (length);
}
