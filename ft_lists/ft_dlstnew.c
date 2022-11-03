
#include "../libft.h"

/*
 * Create a new list double of type t_list and return it
*/
t_double_list	*ft_dlstnew(int value)
{
	t_double_list	*list;

	list = (t_double_list *) ft_calloc(1, sizeof(t_double_list));
	if (!list)
		return (NULL);
	list->value = value;
	list->next = NULL;
	list->prev = NULL;
	return (list);
}
