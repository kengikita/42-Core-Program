#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*s1;
	const unsigned char	*s2;
	size_t				i;

	i = 1;
	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	if (s2 < s1)
	{
		while (i <= n)
		{
			s1[n - i] = s2[n - i];
			i++;
		}
	}
	else
	{
		while (n-- > 0)
			*(s1++) = *(s2++);
	}
	return (s1);
}
