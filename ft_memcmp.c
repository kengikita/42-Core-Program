#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	int				num;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (n > 0 && *ptr1 != '\0' && *ptr2 != '\0')
	{
		if (*ptr1 != *ptr2)
			break ;
		n--;
		ptr1++;
		ptr2++;
	}
	if (n == 0)
		return (0);
	else
		num = *ptr1 - *ptr2;
	return (num);
}

/*int main () {
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "abcdef", 6);
   memcpy(str2, "ABCDEF", 6);

   ret = ft_memcmp(str1, str2, 5);

   printf("%d", ret);
   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }
   
   return(0);
}*/