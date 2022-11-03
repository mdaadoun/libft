
#include "../libft.h"

/*
 *  Pass the content of lst to the function del and then free it
*/
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
