#include "libft.h"

void	*ft_calloc(size_t nelem, size_t size)
{
	void	*ptr;

	if (nelem == 0 || size == 0)
	{
		nelem = 1;
		size = 1;
	}
	ptr = (char *)malloc(nelem * size);
	if (ptr)
		bzero(ptr, nelem * size);
	return (ptr);
}
