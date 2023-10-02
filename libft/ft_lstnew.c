#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ans;

	ans = (t_list *)malloc(sizeof(t_list));
	if (!ans)
		return (NULL);
	ans -> content = content;
	ans -> next = NULL;
	return (ans);
}
