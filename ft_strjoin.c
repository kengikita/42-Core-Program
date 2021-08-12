#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	sizes1;
	size_t	sizes2;
	char	*join;
	int		i;

	i = 0;
	sizes1 = ft_strlen(s1);
	sizes2 = ft_strlen(s2);
	join = malloc(sizeof(char *) * (sizes1 + sizes2 + 1));
	if (!join)
		return (NULL);
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
