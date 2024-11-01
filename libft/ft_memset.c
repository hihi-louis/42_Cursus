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

// int main()
// {
//     int str[] = {3, 5, 4, 8, 6};
//     printf("Before memset: ");
//     for(int i = 0; i < 5; i++) {
//         printf("%d ", str[i]);
//     }
//     printf("\n");

//     memset(str, 'c', 2 * sizeof(int));
//     printf("After memset: ");
//     for(int i = 0; i < 5; i++) {
//         printf("%d ", str[i]);
//     }
//     printf("\n");

//     int str2[] = {3, 5, 4, 8, 6};
//     ft_memset(str2, '2', 2 * sizeof(int));
//     printf("After ft_memset: ");
//     for(int i = 0; i < 5; i++) {
//         printf("%d ", str2[i]);
//     }
//     printf("\n");

//     return 0;
// }