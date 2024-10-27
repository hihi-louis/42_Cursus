#include "libft.h"
void  *ft_memcpy(void *des, const void *src, size_t len)
{
  size_t  i;

  i = 0;
  if (!des && !src)
		return (NULL);
  if(des != src)
  {
    while (i < len)
    {
    ((unsigned char *)des)[i] = ((unsigned char *)src)[i];
    i++;
    }
  }
  return (des);
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