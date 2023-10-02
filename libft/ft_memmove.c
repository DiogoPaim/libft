#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (dest);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	while (n--)
	{
		d[n] = s[n];
	}
	return (dest);
}
