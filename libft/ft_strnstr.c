#include "libft.h"

int	is_word(const char *big, const char *little, size_t len, size_t start)
{
	size_t	i;

	i = 0;
	while (start + i < len && little[i] && little[i] == big[start + i])
		i++;
	if (!little[i])
		return (1);
	return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len_l;
	size_t	j;
	char	*b;

	j = 0;
	b = (char *)big;
	len_l = ft_strlen(little);
	if (*little == 0)
		return ((char *) big);
	if (len == 0)
		return (0);
	while (b[j] && len_l <= len)
	{
		if (b[j] == *little && !ft_strncmp(&b[j], little, len_l))
			return (&b[j]);
		b++;
		len--;
	}
	return (NULL);
}
