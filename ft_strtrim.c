#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t			size;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	size = ft_strlen(s1);
	while (size && ft_strchr(set, s1[size]))
		size--;
	return (ft_substr((char *)s1, 0, size + 1));
}

/*int main()
{
    const char a[] = "abcdeHELLO WORLDabdef";
    const char b[] = "abcdef";
    char *p;
    
    p = ft_strtrim(a, b);
    
    printf("%s", p);
}*/