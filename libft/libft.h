#ifndef LIBFT_H
#define LIBFT_H
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

typedef unsigned char t_byte;

void  *ft_memset(void* ptr, int value, size_t num);
void  ft_bzero(void *s, size_t len);
void  *ft_memcpy(void *des, const void *src, size_t len);
void *ft_memccpy(void *des, const void *src, int c, size_t size);
void *ft_memmove(void *dest_str, const void *src_str, size_t numBytes);
void *ft_memchr(const void *str, int c, size_t n);
int ft_memcmp(const void *str1, const void* str2, size_t n);
char *ft_strcpy(char *des, char *src, size_t size);
char	*ft_strdup(const char *src);
char *ft_strcat(char *des, const char *source);

size_t	ft_strlen(const char *str);
size_t ft_strlcat(char *des, const char *src, size_t sizeOfDes);
#endif`