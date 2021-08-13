#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*s1;
	const unsigned char	*s2;

	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	if (dest == src || n == 0)
		return (dest);
	if (s2 < s1)
	{
		while (--n)
			s1[n] = s2[n];
	}
	else
	{
		while (n-- > 0)
			*s1++ = *s2++;
	}
	return (s1);
}
