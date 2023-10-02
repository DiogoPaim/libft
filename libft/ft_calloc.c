#include "libft.h"

void	*ft_calloc(size_t n_members, size_t size)
{
	void	*ans;
	size_t	bytes_in_array;

	bytes_in_array = n_members * size;
	ans = malloc(bytes_in_array);
	if (!ans)
		return (NULL);
	ft_bzero(ans, bytes_in_array);
	return (ans);
}
