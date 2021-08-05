#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	numdest;
	unsigned int	numsrc;
	unsigned int	destsize;

	numdest = 0;
	numsrc = 0;
	while (dest[numdest])
		numdest++;
	destsize = numdest;
	while ((src[numsrc] && numdest < size - 1) && size != 0)
	{
		dest[numdest] = src[numsrc];
		numsrc++;
		numdest++;
	}
	dest[numdest] = '\0';
	numsrc = 0;
	while (src[numsrc])
		numsrc++;
	return (destsize + numsrc);
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