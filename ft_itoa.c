#include "libft.h"

static char	*ft_strcpy(char *dst, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

static int	ft_intcount(long n)
{
	if (n < 0)
		return (ft_intcount(-n) + 1);
	if (n >= 10)
		return (ft_intcount(n / 10) + 1);
	return (1);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		length;

	length = ft_intcount(n) + 1;
	str = malloc(sizeof(*str) * length);
	if (!str)
		return (NULL);
	if (n == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
	str[--length] = '\0';
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
	}
	if (n == 0)
		return (ft_strcpy(str, "0"));
	while (length && n)
	{
		str[--length] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
