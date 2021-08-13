#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	numsrc;
	unsigned int	i;

	i = 0;
	if (!src)
		return (0);
	else
	{
		numsrc = ft_strlen(src);
		if (size > 0)
		{
			while ((src[i] && i < size - 1))
			{
				dest[i] = src[i];
				i++;
			}
			dest[i] = '\0';
		}
		return (numsrc);
	}
	return (0);
}
