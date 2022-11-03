
#include "../libft.h"

/*
 * Set a given new list to the front of a list of list
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new && lst)
	{
		new->next = *lst;
		*lst = new;
	}
}
