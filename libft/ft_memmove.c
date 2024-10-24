#include "libft.h"

void *ft_memmove(void *dest_str, const void *src_str, size_t numBytes)
{
  unsigned char *dest = (unsigned char *)dest_str;
  const unsigned char *src = (const unsigned char *)src_str;

  if (dest == src)
    return dest;
  if (dest < src)
  {
    while (numBytes--)
    {
      *dest++ = *src++;
    }
  }
  else
  {
    while (numBytes--)
    {
      dest += numBytes;
      src += numBytes;
      *--dest = *--src;
    }
    
  }
  return dest;
}

// #include <stdio.h>

// int main()
// {
//   char dest_str[] = "";
//   char src_str[] = "Hello* Louis";

//   puts("source string [src_str] before memmove:-"); 
// 	puts(dest_str); 

//   ft_memmove(dest_str, src_str, sizeof(src_str));

//   puts("\nsource string [src_str] after memmove:-"); 
// 	puts(dest_str); 
// 	return 0; 
// }