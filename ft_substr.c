#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	s_length;

	i = 0;
	if (s[i] != '\0')
	{
		s_length = ft_strlen(s);
		if (start >= s_length)
			return (ft_strdup((char *)""));
		if (len > s_length)
			len = s_length - start;
		str = malloc(sizeof(char) * (len + 1));
		if (!str)
			return (NULL);
		while (i < len && s[start])
			str[i++] = s[start++];
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
