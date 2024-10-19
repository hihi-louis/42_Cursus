#include "libft.h"

void* ft_memset(void* ptr, int value, size_t num)
{
  t_byte  *p;
  size_t  i;

  p = ptr;
  i = 0;
  while (i < num)
  {
   p[i] = (t_byte)value;
   i++;
  }
  return p;
}

// #include <stdio.h>
// int main()
// {
//   char str[] = "What the fuck, what is thatttt";
//   printf("Before memset %s\n",str);
//   ft_memset(str, '&', 7);
//   printf("After memset %s\n",str);
//   return 0;
// }