#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	numsrc;

	if (src && dest)
	{
		numsrc = ft_strlen(src);
		if (size > 0)
		{
			if (numsrc < size - 1)
				ft_memcpy(dest, src, numsrc + 1);
			else
			{
				ft_memcpy(dest, src, numsrc - 1);
				dest[size - 1] = '\0';
			}
		}
		return (numsrc);
	}
	return (0);
}
