#include "libft.h"

char	*ft_tolower(char *str)
{
	int	i;
	int	num;

	i = 0;
	while (str[i] != '\0')
	{
		num = str[i];
		if (num >= 65 && num <= 90)
		{
			str[i] = num + 32;
		}
		i++;
	}
	return (str);
}

/*#include <stdio.h>
int main(void)
{
	char *a;
	char b[] = "ABCDEZ";

	a = ft_tolower(b);
	printf("%s",a);
}*/