#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	char	*ptr;

	ptr = s;
	while (*s != c)
	{
		ptr++;
		s++;
	}
	return (ptr);
}

/*int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}*/