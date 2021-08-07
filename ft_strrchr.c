#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;

	while (*s != '\0')
		s++;
	ptr = s;
	while (*s != c)
	{
		ptr--;
		s--;
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