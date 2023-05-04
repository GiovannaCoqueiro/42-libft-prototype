#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c);

int main(void)
{
	char	str[] = "Hello, World!";
	char	str1[] = "";

	printf("Result  : %s\nExpected: %s\n", ft_strchr(str, 'H'), strchr(str, 'H'));
	printf("Result  : %s\nExpected: %s\n", ft_strchr(str, 'o'), strchr(str, 'o'));
	printf("Result  : %s\nExpected: %s\n", ft_strchr(str, 'h'), strchr(str, 'h'));
	printf("Result  : %s\nExpected: %s\n", ft_strchr(str, '\0'), strchr(str, '\0'));
	printf("Result  : %s\nExpected: %s\n", ft_strchr(str, 'o' + 100), strchr(str, 'o' + 100));
	printf("Result  : %s\nExpected: %s\n", ft_strchr(str1, 'h'), strchr(str1, 'h'));
}

char	*ft_strchr(const char *s, int c)
{
	int		count;
	char	*str;
	char	character;

	str = (char *)s;
	character = (unsigned char)c;
	count = -1;
	while (s[++count] != '\0')
		if (s[count] == character)
			return (&str[count]);
	if (character == '\0')
		return (&str[strlen(str)]);
	return (0);
}