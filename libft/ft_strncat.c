#include "libft.h"

char *ft_strncat(char *dest, const char *src, size_t n)
{
  size_t  size;
  size_t  i;

  size = ft_strlen(dest);
  i = 0;
  while(*src && i < n)
  {
    dest[size] = src[i];
    size++;
    i++;
  }
  dest[size] = '\0';
  return (dest);
}

// int main()
// {
//   char *src = "Concec gi z";
//   char des[100] = "Hello ";
//   ft_strncat(des, src, 3);
//   printf("%s", des);
//   return 0;
// }

