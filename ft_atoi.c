#include "libft.h"

int	ft_atoi(char *str)
{
	int	sign;
	int	total;
	int	tf;

	tf = 1;
	total = 0;
	while (*str != '\0' && (*str == ' ' || *str == '\n' || *str == '\t'
			|| *str == '\f' || *str == '\r' || *str == '\v'))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str != '\0' && tf == 1)
	{
		if (*str >= '0' && *str <= '9')
			total = (total * 10) + (*str - '0');
		else
			tf = 0;
		str++;
	}
	return (total * sign);
}
