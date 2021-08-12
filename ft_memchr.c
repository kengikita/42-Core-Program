#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	while (n > 0)
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		n--;
		ptr++;
	}
	return (0);
}

/*int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '*';
   char *ret;

   ret = memchr(str, ch, 5);

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}*/