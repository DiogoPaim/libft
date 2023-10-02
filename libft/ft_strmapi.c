#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ans;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (*s == '\0')
		return (ft_strdup(""));
	ans = malloc(sizeof(char) * (len + 1));
	if (!ans)
		return (NULL);
	while (i < len)
	{
		ans[i] = f(i, s[i]);
		i++;
	}
	ans[i] = '\0';
	return (ans);
}
