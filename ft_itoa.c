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

static int	ft_intcount(int n)
{
	int	deduct;
	int	count;

	deduct = n;
	count = 0;
	while (deduct > 0)
	{
		deduct = deduct / 10;
		count++;
	}
	return (count + 1);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		length;

	length = ft_intcount(n);
	str = malloc(sizeof(char *) * length);
	if (!str)
		return (NULL);
	if (n == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
	str[--length] = '\0';
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
	}
	if (n == 0)
		return (ft_strcpy(str, "0"));
	while (length > 0 && n > 0)
	{
		str[--length] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
