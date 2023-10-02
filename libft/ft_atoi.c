#include "libft.h"

char	*trim_str(char *str)
{
	while (*str == ' '
		|| *str == '\t'
		|| *str == '\n'
		|| *str == '\v'
		|| *str == '\f'
		|| *str == '\r')
		str++;
	return (str);
}

int	ft_atoi(const char *str)
{
	int		ans;
	int		signal;
	char	*s;

	ans = 0;
	s = trim_str((char *)str);
	signal = 1;
	if (*s == '+' || *s == '-')
	{
		if (*s == '-')
			signal = -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		if (signal == 1)
			ans = ans * 10 + (*s - '0');
		else
			ans = ans * 10 - (*s - '0');
		s++;
	}
	return (ans);
}
