#include "libft.h"

static int	ft_wordcount(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

static char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char	*str;

	str = malloc(sizeof(*s) * n + 1);
	if (!str)
		return (NULL);
	str = ft_strncpy(str, s, n);
	str[n] = '\0';
	return (str);
}

char	**ft_split(const char *s, char c)
{
	char	**words;
	size_t	i;
	size_t	j;
	size_t	k;

	j = 0;
	i = 0;
	k = 0;
	words = malloc(sizeof(s) * (ft_wordcount(s, c) + 1));
	if (!words)
		return (NULL);
	while (s[j])
	{
		while (s[j] == c)
			j++;
		i = j;
		while (s[j] != c && s[j])
			j++;
		if (j > i)
			words[k++] = ft_strndup(s + i, j - i);
	}
	words[k] = NULL;
	return (words);
}

/*int		main(void)
{
	char	*ptr;
	char	**new;

	ptr = "*****this**i**my***string*abc";

	new = (ft_split(ptr, '*'));
	printf("%s\n%s\n%s\n%s\n" , new[0], new[1], new[3], new[4]);
	return (0);
}*/