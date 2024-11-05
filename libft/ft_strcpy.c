#include "libft.h"

char *ft_strcpy(char *des, char *src)
{
  size_t  i;

  i = 0;
  while (src[i])
  {
    des[i] = src[i];
    i++;
  }
  des[i] = '\0';
  return (des);
}

// #include <stdio.h>

// int main()
// {
//   char src[] = "cai qq";
//   char des[sizeof(src)];
//   ft_strcpy(des, src, sizeof(src));
//   printf("%s", des);
//   return 0;
// }