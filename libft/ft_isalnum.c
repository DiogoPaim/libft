int	ft_isalnum(int c)
{
	if ((c <= '9' && c >= '0')
		|| (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
