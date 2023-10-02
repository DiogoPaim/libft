#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next_node;

	if (*lst == NULL)
		return ;
	current = *lst;
	while (current -> next != NULL)
	{
		next_node = current -> next;
		ft_lstdelone(current, del);
		current = next_node;
	}
	ft_lstdelone(current, del);
	*lst = (NULL);
}
