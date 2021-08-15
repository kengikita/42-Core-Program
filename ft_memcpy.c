#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*s1;
	const unsigned char	*s2;

	if (dest || src)
	{
		s1 = (unsigned char *)dest;
		s2 = (unsigned char *)src;
		while (n > 0)
		{
			*s1 = *s2;
			s1++;
			s2++;
			n--;
		}
		return (dest);
	}
	return (NULL);
}

/*#include <stdio.h>
#include <stddef.h>
#include <string.h>

int main()
{
	const char src[50] = "http://www.tutorialspoint.com";
	char dest[50];
	strcpy(dest,"Heloooo!!");
	printf("Before memcpy dest = %s\n", dest);
	ft_memcpy(dest, src, strlen(src)+1);
	printf("After memcpy dest = %s\n", dest);

   return (0);
}*/
