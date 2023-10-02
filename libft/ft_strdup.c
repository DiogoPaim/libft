#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*ans;

	len = ft_strlen(s) + 1;
	ans = (char *)malloc((len) * sizeof(char));
	if (!ans)
		return (NULL);
	ft_strlcpy(ans, s, len);
	return (ans);
}
