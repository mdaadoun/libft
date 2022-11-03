
#include "../libft.h"

/*
 * Return the last linked list by checking if next is NULL
 * Or, if circular, check if the next is equal to the first
*/
t_double_list	*ft_dlstlast(t_double_list *lst)
{
	t_double_list	*first;

	first = lst;
	while (lst || lst->next != first)
	{
		if (!lst->next || lst->next == first)
			break ;
		lst = lst->next;
	}
	return (lst);
}
