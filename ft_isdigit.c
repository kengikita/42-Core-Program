#include "libft.h"

int	ft_isdigit(char *str)
{
	int	i;
	int	t;
	int	num;

	i = 0;
	if (str[i] == '\0')
	{
		t = 1;
	}
	else
	{
		while (str[i] != '\0')
		{
			num = str[i];
			if (num >= 48 && num <= 57)
				t = 1;
			else
			{
				t = 0;
				break ;
			}
			i++;
		}
	}
	return (t);
}
