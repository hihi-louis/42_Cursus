#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
  unsigned char  *s;
  size_t i;
  unsigned char chr;

  s = (unsigned char *)str;
  i = 0;
  chr = (unsigned char)c;
  while (i < n)
  {
    if(s[i] == chr)
      return (s + i);
    i++;
  }
  return NULL;
}
// #include <stdio.h>
// int main()
// {
//   char str[] = "Hello there";
//   char *result = ft_memchr(str, 'e', sizeof(str));
//   printf("%s", result);
//   return 0;
// }