/*SYNOPSIS
       #include <strings.h>

       void bzero(void *s, size_t n);

       #include <string.h>

       void explicit_bzero(void *s, size_t n);

DESCRIPTION
       The bzero() function erases the data in the n bytes
	   of the memory starting at the location
	   pointed to by s, by writing zeros (bytes containing '\0') to that area.

       The  explicit_bzero() function performs the same task as bzero().
       It differs from bzero() in that it guarantees that compiler
	   optimizations will not remove the erase operation
       if the compiler deduces that the operation is "unnecessary".

RETURN VALUE
       None.*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}
