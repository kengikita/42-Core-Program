#include "libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	numdest;
	size_t	numsrc;
	size_t	i;

	i = 0;
	numdest = ft_strlen(dest);
	numsrc = ft_strlen(src);
	if (size <= numdest)
		return (numsrc + size);
	while ((src[i] != '\0') && (i < size - numdest - 1))
	{
		dest[numdest + i] = src[i];
		i++;
	}
	dest[numdest + i] = '\0';
	return ((unsigned int)numdest + numsrc);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
	char a[] = "abcde";
	char b[] = "fghij";
	unsigned int d;

	d = ft_strlcat(a,b,100);

	printf("d = %d", d);
}*/