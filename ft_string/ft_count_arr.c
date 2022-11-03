#include "../libft.h"

size_t	ft_count_arr(char **arr)
{
	size_t	len;

	len = 0;
	while (arr[len])
		len++;
	return (len);
}
