#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ans;
	t_list	*new;

	ans = NULL;
	if (lst == NULL || f == NULL)
		return (NULL);
	while (lst != NULL)
	{
		new = (t_list *)malloc(sizeof(t_list));
		if (new == NULL)
		{
			ft_lstclear(&ans, del);
			return (NULL);
		}
		new -> content = f(lst -> content);
		new -> next = NULL;
		ft_lstadd_back(&ans, new);
		lst = lst -> next;
	}
	return (ans);
}
