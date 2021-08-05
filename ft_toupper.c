#include "libft.h"

char	*ft_toupper(char *str)
{
	int	i;
	int	num;

	i = 0;
	while (str[i] != '\0')
	{
		num = str[i];
		if (num >= 97 && num <= 122)
		{
			str[i] = num - 32;
		}
		i++;
	}
	return (str);
}
