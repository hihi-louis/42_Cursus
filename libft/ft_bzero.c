#include "libft.h"
void  ft_bzero(void *s, size_t len)
{
  unsigned char *p = s;
  while(len--)
  {
    *p++ = 0;
  }
}

#include <stdio.h>
int main()
{
  char buffer[20];
  ft_bzero(buffer, sizeof(buffer));
  for (int i = 0; i < sizeof(buffer); i++)
  {
    printf("%d ", buffer[i]);
  }
  return 0;
}