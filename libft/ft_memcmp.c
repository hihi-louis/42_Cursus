#include "libft.h"

int ft_memcmp(const void *str1, const void* str2, size_t n)
{
  unsigned char *s1;
  unsigned char *s2;
  size_t i;

  if (n == 0)
    return (0);
  s1 = (unsigned char *)str1;
  s2 = (unsigned char *)str2;
  i = 0;
  while (i < n)
  {
    if (s1[i] != s2[i])
      return (s1[i] - s2[i]);
    i++;
  }
  return (0);
}
// #include <stdio.h>
// int main()
// {
//   char s1[] = "abcde";
//   char s2[] = "ABCDE";

//   int res = ft_memcmp(s1, s2, 5);
//   printf("%d", res);
//   return 0;
// }