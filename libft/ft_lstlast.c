#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	i;

	if (lst == NULL)
		return (NULL);
	i = 1;
	while (lst -> next != NULL)
	{
		lst = lst -> next;
		i++;
	}
	return (lst);
}
