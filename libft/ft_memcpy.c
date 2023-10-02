#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*destiny;
	const unsigned char	*source;

	i = 0;
	if (!dest && !src)
		return (dest);
	destiny = (unsigned char *)dest;
	source = (const unsigned char *)src;
	while (i < n)
	{
		destiny[i] = source[i];
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	char *s = "hello";
	void *dest = malloc(6);
	char *s2 = "hallo";
	unsigned char *pointer = (unsigned char *) ft_memcpy(dest, s, 6);
	printf("%s" , pointer);

	unsigned char *pointer2 = (unsigned char *) memcpy(dest, s2, 6);
	printf("%s" , pointer2);
}
*/
