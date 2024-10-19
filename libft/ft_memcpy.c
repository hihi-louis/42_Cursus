#include "libft.h"
void  ft_memcpy(t_byte *des, t_byte *src, size_t len)
{
  size_t  i;

  i = 0;
  while (i < len)
  {
    des[i] = src[i];
    i++;
  }
}
// #include <stdio.h>

// int main ()
// {
//   unsigned int len;

//   len = 6;
//   char src[] = "HAHA what the fuckkkk";
//   char des[len];
//   memcpy(des, src+2, sizeof(char) * 6);
//   printf("%s", des);
//   return 0;
// }