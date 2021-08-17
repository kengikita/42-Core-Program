#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	sizes;
	char	*join;
	int		i;

	i = 0;
	sizes = ft_strlen(s1) + ft_strlen(s2);
	join = malloc(sizeof(*s1) * (sizes + 1));
	if (join)
	{
		while (*s1 != '\0')
		{
			join[i] = *(s1++);
			i++;
		}
		while (*s2 != '\0')
		{
			join[i] = *(s2++);
			i++;
		}
		join[i] = '\0';
		return (join);
	}
	return (NULL);
}
