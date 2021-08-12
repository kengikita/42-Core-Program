#include "libft.h"

void	*ft_memset(void *str, int c, unsigned int n)
{
	unsigned char	*p;

	p = (unsigned char *)str;
	while (n > 0)
	{
		*p = (unsigned char)c;
		p++;
		n--;
	}
	return (str);
}
