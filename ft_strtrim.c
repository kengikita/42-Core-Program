#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	size;

	if (!s1)
		return (0);
	i = 0;
	while (s1[i] && (ft_strchr(set, s1[i]) != 0))
		i++;
	size = ft_strlen((char *)s1);
	while (s1[i] && ft_strchr(set, s1[size - 1]))
		size--;
	return (ft_substr(s1, i, size - i));
}

/*int main()
{
    const char a[] = "abcdeHELLO WORLDabdef";
    const char b[] = "abcdef";
    char *p;
    
    p = ft_strtrim(a, b);
    
    printf("%s", p);
}*/