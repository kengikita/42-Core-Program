#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		*ptr;
	size_t		i;

	i = ft_strlen(s);
	ptr = (0);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
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