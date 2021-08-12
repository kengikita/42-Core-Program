#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t n)
{
	unsigned int	position;
	unsigned int	fpos;
	char			*final;

	position = 0;
	while ((size_t)position < n && str[position] != '\0')
	{
		if (str[position] == find[0])
		{
			fpos = 1;
			while (find[fpos] != '\0' && str[position + fpos] == find[fpos]
				&& (size_t)(position + fpos) < n)
				fpos++;
			if (find[fpos] == '\0')
			{
				final = (char *)&str[position];
				return (final);
			}
		}
		position++;
	}
	return (0);
}

/*int main()
{
    const char *largestring = "Foo Bar Baz";
    const char *smallstring = "Bar";
    char	*ptr;
    char    *str;

	str = ft_strnstr(largestring,smallstring, 5);
	
	printf("%s", str);
}*/