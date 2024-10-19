#include "libft.h"
void  ft_bzero(void *s, size_t len)
{
  char  *str;
  size_t  i;

  i = 0;
  str = s;
  while(i < len)
  {
    str[i] = 0;
    i++;
  }
}
// #include <stdio.h>
// int main()
// {
//   char buffer[20];
//   ft_bzero(buffer, sizeof(buffer));
//   for (int i = 0; i < sizeof(buffer); i++)
//   {
//     printf("%d ", buffer[i]);
//   }
//   return 0;
// }