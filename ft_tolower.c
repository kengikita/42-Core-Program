#include "libft.h"

int	ft_tolower(int str)
{
	int	num;

	num = str;
	if (num >= 65 && num <= 90)
		num = num + 32;
	return (num);
}

/*#include <stdio.h>
int main(void)
{
	char *a;
	char b[] = "ABCDEZ";

	a = ft_tolower(b);
	printf("%s",a);
}*/