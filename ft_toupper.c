#include "libft.h"

int	ft_toupper(int str)
{
	int	num;

	num = str;
	if (num >= 97 && num <= 122)
		num = num - 32;
	return (num);
}
