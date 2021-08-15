#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	size;

	if (!s)
		return (0);
	if (start > (unsigned int)ft_strlen(s))
	{
		str = malloc(sizeof(*s) * 1);
		str[0] = '\0';
		return (str);
	}
	if (len <= (size_t)ft_strlen(s + start))
		size = len;
	else
		size = ft_strlen(s + start);
	str = malloc(sizeof(*s) * (size + 1));
	if (!str)
		return (0);
	ft_strlcpy(str, (s + start), size + 1);
	return (str);
}
