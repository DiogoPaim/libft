#include "libft.h"


int test_memset(void)
{
	void *s = malloc(5);
	unsigned char str[] = "+++++";
	unsigned char *pointer = (unsigned char *) ft_memset(s, 43, 5);
	int passing_test = 1;
	int i = 0;
	while (i < 5)
	{
		if (str[i] != pointer[i])
		{
			passing_test = 0;
			break;
		}
		i++;
	}
	free(s);
	return (passing_test);
}

int test_bzero(void)
{
	void *s = malloc(5);
	unsigned char str[] = "\0\0\0\0\0";
	ft_bzero(s, 5);
	unsigned char *p = (unsigned char *)s;
	int passing_test = 1;
	int i = 0;
	while (i < 5)
	{
		if (str[i] != p[i])
		{
			passing_test = 0;
			break;
		}
		i++;
	}
	free(s);
	return (passing_test);
}

int test_memcpy(void)
{
	int passing_test = 1;
	char *s = "hello";
	void *dest = malloc(6);
	char *s2 = "hallo";
	ft_memcpy(dest, s, 6);
	int i = 0;
	unsigned char *pointer = (unsigned char *)dest;

	while (i < 6)
	{
		if (s[i] != pointer[i])
		{

			passing_test = 0;
			break;
		}
		i++;
	}
	ft_memcpy(dest, s2, 6);
	i = 0;
	unsigned char *pointer2 = (unsigned char *) dest;
	while (i < 6)
	{
		if (s2[i] != pointer2[i])
		{
			passing_test = 0;
			break;
		}
		i++;
	}
	free (dest);
	return (passing_test);
}

int test_memmove(void)
{
	int passing_test = 1;
	char *s = "hello";
	void *dest = malloc(6);
	char *s2 = "hallo";
	int i = 0;
	ft_memmove(dest, s, 6);
	unsigned char *pointer = (unsigned char *) dest;
	while (i < 6)
	{
		if (s[i] != pointer[i])
		{

			passing_test = 0;
			break;
		}
		i++;
	}
	i = 0;
	memmove(dest, s2, 6);
	unsigned char *pointer2 = (unsigned char *) dest ;
	while (i < 6)
	{
		if (s2[i] != pointer2[i])
		{
			passing_test = 0;
			break;
		}
		i++;
	}
	return (passing_test);
}

int test_strlcpy(void)
{
	int passing_test = 1;
	unsigned char s[] = "Hello";
	unsigned char *c1 = "World";
	int i = 0;
	int size;
	size = ft_strlcpy(s,c1,0);
	if (size != 5)
		passing_test = 0;

	size = ft_strlcpy(s,c1,6);
	if (size != 5)
		passing_test = 0;

	while (i<6)
	{
		if(s[i] != c1[i])
			passing_test = 0;
		i++;
	}
	return passing_test;
}

int test_strlcat(void)
{
	int passing_test = 1;
	unsigned char s[20] = "Hello ";
	unsigned char *c1 = "World";
	unsigned char *target = "Hello World";
	int i = 0;
	int size;
	size = ft_strlcat(s,c1,0);
	if (size != 5)
		passing_test = 0;

	size = ft_strlcat(s,c1,12);
	if (size != 11)
		passing_test = 0;

	while (i<12)
	{
		if(s[i] != target[i])
			passing_test = 0;
		i++;
	}
	return passing_test;
}

int test_toupper(void)
{
	if (ft_toupper('z') == 'Z' && ft_toupper('B') == 'B'
		 && ft_toupper('a') == 'A' && ft_toupper(0) == 0)
		 return (1);
	return (0);
}

int test_tolower(void)
{
	if (ft_tolower('Z') == 'z' && ft_tolower('z') == 'z'
		 && ft_tolower('A') == 'a' && ft_tolower(0) == 0)
		 return (1);
	return (0);
}

int	test_strchr (void)
{
	const char *str = "joga a bola";
	char *s = ft_strchr(str, 'o');
	int i = 0;

	while (i<10)
	{
		if(s[i] != str[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	test_strrchr(void)
{
	const char *str = "joga a bola";
	char *s = ft_strrchr(str, 'o');
	int i = 0;

	while (i<4)
	{
		if(s[i] != str[i + 8])
			return (0);
		i++;
	}
	return (1);
}

int test_strncmp(void)
{
	if (ft_strncmp("sport", "sporting", 5) == 0 &&  ft_strncmp("sport", "sporting", 10) == -105 && ft_strncmp("a","b",0) == 0)
		return (1);
	return (0);
}

int test_memchr(void)
{
	char s[] = "yhello";
	void *str = ft_memchr(s, 'h', 10);

	if(memchr(s,'h',10) == str && memchr(s,'z',10) == ft_memchr(s,'z',10))
		return (1);
	return (0);
}

int test_memcmp(void)
{
	char *s = "yhello";
	char *s2 = "yellow";
	int dif = ft_memcmp(s, s2, 10);

	if(memcmp(s, s2,10) == dif && memcmp(s,s2,0) == ft_memcmp(s,s2,0))
		return (1);
	return (0);
}
// strnstr as it is from the library copied
char *
strnstr(const char *s, const char *find, size_t slen)
{
	char c, sc;
	size_t len;

	if ((c = *find++) != '\0') {
		len = strlen(find);
		do {
			do {
				if (slen-- < 1 || (sc = *s++) == '\0')
					return (NULL);
			} while (sc != c);
			if (len > slen)
				return (NULL);
		} while (strncmp(s, find, len) != 0);
		s--;
	}
	return ((char *)s);
}

int test_strnstr(void)
{
	char *s = "I'm a string!!";
	char *s2 = "string";

	if(ft_strnstr(s, s2, 20) == strnstr(s, s2, 20) && ft_strnstr(s, s2, 8) == strnstr(s, s2, 8))
		return(1);
	return (0);
}

int main(void)
{
	int passing_test;
	printf("The Test for Libft are starting \n");

	printf("This is the test For ft_isalpha \n");
	if (ft_isalpha('a') == 1 && ft_isalpha('Z') == 1)
		printf(" \033[1;32m The tests for the presence of letters are passing \n");
	else
		printf("\033[1;31m The test for the presence of letters are NOT passing \n");
	if (ft_isalpha(3) == 0 && ft_isalpha(32) == 0 && ft_isalpha('2') == 0)
		printf(" \033[1;32m The test without the presence of letters are passing \n");
	else
		printf("\033[1;31m The test without the presence of letters are NOT passing \n");

	printf("\033[1;37m This is the test For ft_isalnum \n");
	if (ft_isalnum('A') == 1 && ft_isalnum('z') == 1 && ft_isalnum('9') == 1 && ft_isalnum('0'))
		printf(" \033[1;32m The test for the presence of letters and nums is passing \n");
	else
		printf("\033[1;31m The test for the presence of letters and nums are NOT passing\n");
	if (ft_isalnum(3) == 0 && ft_isalnum(32) == 0)
		printf(" \033[1;32m The test without the presence of letters and nums are passing \n");
	else
		printf("\033[1;31m The test without the presence of letters and nums are NOT passing \n");

	printf("\033[1;37m This is the test For ft_isascii\n");
	if (ft_isascii(127) == 1 && ft_isascii(2) == 1 && ft_isascii(77) == 1)
		printf(" \033[1;32m The test for the presence of ascii chars is passing \n");
	else
		printf("\033[1;31m The test for the presence of ascii chars are NOT passing\n");
	if (ft_isascii(-1) == 0 && ft_isascii(128) == 0)
		printf(" \033[1;32m The test without the presence of ascii chars are passing \n");
	else
		printf("\033[1;31m The test without the presence of ascii chars are NOT passing\n");

	printf("\033[1;37m This is the test For ft_isdigit\n");
	if (ft_isdigit('9') == 1 && ft_isdigit('0') == 1 && ft_isdigit('5') == 1)
		printf(" \033[1;32m The test for the presence of nums is passing \n");
	else
		printf("\033[1;31m The test for the presence of nums are NOT passing\n");
	if (ft_isdigit('0' - 1) == 0 && ft_isdigit(32) == 0)
		printf(" \033[1;32m The test without the presence of nums are passing \n");
	else
		printf("\033[1;31m The test without the presence of nums are NOT passing\n");

	printf("\033[1;37m This is the test For ft_isprint\n");
	if (ft_isprint(126) == 1 && ft_isprint(32) == 1 && ft_isprint(77) == 1)
		printf(" \033[1;32m The test for the presence of printable chars is passing \n");
	else
		printf("\033[1;31m The test for the presence of printable chars are NOT passing\n");
	if (ft_isprint(12) == 0 && ft_isprint(127) == 0)
		printf(" \033[1;32m The test without the presence of printable chars are passing \n");
	else
		printf("\033[1;31m The test without the presence of printable chars are NOT passing\n");

	printf("\033[1;37m This is the test For ft_strlen\n");
	if (ft_strlen("Ola") == 3 && ft_strlen("hello guys") == 10 && ft_strlen("1") == 1)
		printf(" \033[1;32m The test with the presence of chars is passing \n");
	else
		printf("\033[1;31m The test with the presence of chars are NOT passing\n");
	if (ft_strlen("") == 0 && ft_strlen(" ") == 1)
		printf(" \033[1;32m The test without the presence of chars but space are passing \n");
	else
		printf("\033[1;31m The test without the presence of chars but space are NOT passing\n");

	printf("\033[1;37m This is the test For ft_memset\n");
	passing_test = test_memset();
	if (passing_test)
		printf(" \033[1;32m The test is passing for 5 chars \n");
	else
		printf(" \033[1;31m The test is NOT passing for 5 chars \n");

	printf("\033[1;37m This is the test For ft_bzero\n");
	passing_test = test_bzero();
	if (passing_test)
		printf(" \033[1;32m The test is passing for 5 chars \n");
	else
		printf(" \033[1;31m The test is NOT passing for 5 chars \n");

	printf("\033[1;37m This is the test For ft_memcpy\n");
	passing_test = test_memcpy();
	if (passing_test)
		printf(" \033[1;32m The test is passing for 5 chars with hello and Hallo\n");
	else
		printf(" \033[1;31m The test is NOT passing for 5 chars with hello and hallo\n");

	printf("\033[1;37m This is the test For ft_memmove\n");
	passing_test = test_memmove();
	if (passing_test)
		printf(" \033[1;32m The test is passing for 5 chars with hello and Hallo\n");
	else
		printf(" \033[1;31m The test is NOT passing for 5 chars with hello and hallo\n");


	printf("\033[1;37m This is the test For ft_strlcpy\n");
	passing_test = test_strlcpy();
	if (passing_test)
		printf(" \033[1;32m The test is passing for 5 chars and size = 0\n");
	else
		printf(" \033[1;31m The test is NOT passing for 5 chars or size = 0\n");

	printf("\033[1;37m This is the test For ft_strlcpy\n");
	passing_test = test_strlcat();
	if (passing_test)
		printf(" \033[1;32m The test is passing for Hello /World and size = 0\n");
	else
		printf(" \033[1;31m The test is NOT passing for Hello /World or size = 0\n");

	printf("\033[1;37m This is the test For ft_toupper\n");
	passing_test = test_toupper();
	if(passing_test)
		printf(" \033[1;32m The test is passing\n");
	else
		printf(" \033[1;31m The test is NOT passing\n");

	printf("\033[1;37m This is the test For ft_tolower\n");
	passing_test = test_tolower();
	if(passing_test)
		printf(" \033[1;32m The test is passing\n");
	else
		printf(" \033[1;31m The test is NOT passing\n");

	printf("\033[1;37m This is the test For ft_strchr\n");
	passing_test = test_strchr();
	if(passing_test)
		printf(" \033[1;32m The test is passing for \"joga a bola\" and char 'o' \n");
	else
		printf(" \033[1;31m The test is NOT passing for \"joga a bola\" and char 'o' \n");

	printf("\033[1;37m This is the test For ft_strrchr\n");
	passing_test = test_strchr();
	if(passing_test)
		printf(" \033[1;32m The test is passing for \"joga a bola\" and char 'o' \n");
	else
		printf(" \033[1;31m The test is NOT passing for \"joga a bola\" and char 'o' \n");

	printf("\033[1;37m This is the test For ft_strncmp\n");
	passing_test = test_strncmp();
	if(passing_test)
		printf(" \033[1;32m The test is passing for sport and sporting \n");
	else
		printf(" \033[1;31m The test is NOT passing for sport and sporting \n");

	printf("\033[1;37m This is the test For ft_memchr\n");
	passing_test = test_memchr();
	if(passing_test)
		printf(" \033[1;32m The test is passing for the presence and not of char \n");
	else
		printf(" \033[1;31m The test is NOT passing for the presence and not of char \n");

	printf("\033[1;37m This is the test For ft_memcmp\n");
	passing_test = test_memcmp();
	if(passing_test)
		printf(" \033[1;32m The test is passing for diff and size 0\n");
	else
		printf(" \033[1;31m The test is NOT passing for diff and size 0 \n");

	printf("\033[1;37m This is the test For ft_strnstr\n");
	passing_test = test_strnstr();
	if(passing_test)
		printf(" \033[1;32m The test is passing \n");
	else
		printf(" \033[1;31m The test is NOT passing \n");
}
