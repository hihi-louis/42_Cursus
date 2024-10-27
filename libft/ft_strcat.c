#include "libft.h"

char *ft_strcat(char *des, const char *source)
{
  size_t  i;
  size_t  size;

  i = 0;
  size = ft_strlen(des);
  while(source[i])
  {
    des[size] = source[i];
    size++;
    i++;
  }
  des[size] = '\0';
  return (des);
}

// int main()
// {
//   char *src = "Concec gi z";
//   char des[100] = "Hello ";
//  ft_strcat(des, src);
//   printf("%s", des);
//   return 0;
// }
