#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *) s;
	i = 0;
	while (str[i] != '\0')
		i++;
	if ((unsigned char) c == '\0')
		return (&str[i]);
	i--;
	while (i >= 0)
	{
		if (str[i] == (unsigned char) c)
			return (&str[i]);
		i--;
	}
	return (0);
}

/*
int	main (void)
{
	const char *str = "joga a bola";
	printf("%s" , ft_strchr(str, 'b'));
	return (0);
}
*/
