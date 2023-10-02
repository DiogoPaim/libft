#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (n != 0 && *ptr1 != '\0' && *ptr1 == *ptr2)
	{
		ptr1++;
		ptr2++;
		--n;
	}
	if (n)
		return (*ptr1 - *ptr2);
	else
		return (0);
}
