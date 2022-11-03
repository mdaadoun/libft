
#include "../libft.h"

/*
 * Return the last connected list by checking if next is NULL
*/
t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!lst->next)
			break ;
		lst = lst->next;
	}
	return (lst);
}
