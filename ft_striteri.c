#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	i = ft_strlen(s);
	while (j < i)
	{
		(*f)(j, s);
		s++;
		j++;
	}
}
