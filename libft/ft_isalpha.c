#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c <= 'z' && c >= 'a')
		|| (c <= 'Z' && c >= 'A'))
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d\n" , '0');
	printf("%d\n" , 'f');
}
*/
