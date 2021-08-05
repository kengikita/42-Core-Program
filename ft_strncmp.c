#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				num;

	i = n;
	while (i > 0 && *s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			break ;
		i--;
		s1++;
		s2++;
	}
	if (i == 0)
		num = 0;
	else
		num = *(unsigned char *)s1 - *(unsigned char *)s2;
	return (num);
}
