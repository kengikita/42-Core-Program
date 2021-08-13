#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	int				num;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	num = 0;
	if (n > 0 || s1 != s2)
	{
		while (num < n)
		{
			if (ptr2[num] != ptr1[num])
				return (ptr1[num] - ptr2[num]);
			i++;
		}
	}
	return (0);
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