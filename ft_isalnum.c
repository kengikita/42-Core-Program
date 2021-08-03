#include <unistd.h>

int	ft_isalnum(char *str)
{
	int	i;
	int	t;
	int	num;

	i = 0;
	if (str[i] == '\0')
		t = 1;
	else
	{
		while (str[i] != '\0')
		{
			num = str[i];
			if ((num >= 48 && num <= 57) || (num >= 65 && num <= 90)
				|| (num >= 97 && num <= 122))
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

/*#include <stdio.h>
int main()
{
	int a;

	a = ft_isalnum("123azAZ09@");
	printf("%d",a);
}*/