#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstring_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
