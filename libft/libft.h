#ifndef LIBFT_H
#define LIBFT_H
#include <string.h>

typedef unsigned char t_byte;

/*Memory*/
void  *ft_memset(void* ptr, int value, size_t num);
void  ft_bzero(void *s, size_t len);
void  ft_memcpy(t_byte *des, t_byte *src, size_t len);
#endif