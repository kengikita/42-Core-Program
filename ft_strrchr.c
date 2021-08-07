#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = (0);
	while (*s)
	{
		if (*s == c)
			ptr = (char *)s;
		s++;
	}
	if (ptr)
		return (ptr);
	if (c == '\0')
		return ((char *)s);
	return (ptr);
}

/*int main () {
	int len;
   	const char str[] = "http://www.tutorialspoint.com";
	const char ch = '.';
	char *ret;

	ret = ft_strrchr(str, ch);

	printf("String after |%c| is - |%s|\n", ch, ret);
   
	return(0);
}*/