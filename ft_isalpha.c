#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c < 123 && c > 96) || (c > 64 && c < 91));
}
