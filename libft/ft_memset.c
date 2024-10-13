#include "libft.h"

void* ft_memset(void* ptr, int value, size_t num)
{
  typedef unsigned char t_byte;
  while (num--)
  {
   ((t_byte *)ptr)[num] = (t_byte)value;
  }
  return ptr;
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