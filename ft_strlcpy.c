#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	numsrc;

	numsrc = 0;
	while ((src[numsrc] && numsrc < size - 1) && size > 0)
	{
		dest[numsrc] = src[numsrc];
		numsrc++;
	}
	dest[numsrc] = '\0';
	numsrc = 0;
	while (src[numsrc])
		numsrc++;
	return (numsrc);
}
