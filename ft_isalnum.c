#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

/*#include <stdio.h>
int main()
{
	int a;

	a = ft_isalnum("2");
	printf("%d",a);
}*/