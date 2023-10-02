#include "libft.h"

int	length_int(int i)
{
	if (i < 0)
	{
		if (i != -2147483648)
			return (length_int(-i) + 1);
		else
			return (11);
	}
	if (i < 10)
		return (1);
	else
		return (length_int(i / 10) + 1);
}

char	*fill_n_in_array(char *ans, int n, int size, int offset)
{
	ans[size] = '\0';
	while (size > offset)
	{
		ans[size - 1] = n % 10 + '0';
		n = n / 10;
		size--;
	}
	return (ans);
}

char	*ft_itoa(int n)
{
	int		len_n;
	int		offset;
	char	*ans;

	len_n = length_int(n);
	offset = 0;
	ans = malloc ((len_n + 1) * sizeof(char));
	if (!ans)
		return (NULL);
	if (n == -2147483648)
	{
		ans[0] = '-';
		ans[1] = '2';
		n = n + 2294967296;
		offset = 2;
	}
	if (n < 0)
	{
		ans[0] = '-';
		n = -n;
		offset = 1;
	}
	ans = fill_n_in_array(ans, n, len_n, offset);
	return (ans);
}

/*int main (void)
{
	printf("%s", ft_itoa (-10));
}*/
