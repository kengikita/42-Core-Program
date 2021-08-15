#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	total;

	i = 0;
	total = 0;
	neg = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			neg = -1;
		if (str[i] == '-' || str[i] == '+')
			return (0);
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		total *= 10;
		total += (str[i++] - '0');
	}
	return (total * neg);
}
