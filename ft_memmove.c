#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*s1;
	const unsigned char	*s2;

	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	if (dest == src || n == 0)
		return (dest);
	if ((s2 < s1) && ((s1 - s2) < (int)n))
	{
		s1 += n - 1;
		s2 += n - 1;
		while (n--)
			*s1-- = *s2--;
	}
	else if ((s1 < s2) && (s2 - s1 < (int)n))
	{
		while (n--)
			*s1++ = *s2++;
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
