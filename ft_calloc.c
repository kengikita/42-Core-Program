#include "libft.h"

void	*ft_calloc(size_t nelem, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(nelem * size);
	if (!ptr)
		return (0);
	bzero(ptr, nelem);
	return (ptr);
}
