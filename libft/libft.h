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

char    *ft_strcpy(char *des, char *src, size_t size);
char    *ft_strdup(const char *src);
char    *ft_strcat(char *des, const char *source);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
char    *ft_strnstr(const char *big, const char *small, size_t len);
char *ft_substr(const char *s, unsigned int start, size_t len);
size_t  ft_strlen(const char *str);
size_t  ft_strlcat(char *des, const char *src, size_t sizeOfDes);
int ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_tolower(int c);
int ft_toupper(int c);
int ft_atoi(const char *str);
void    *ft_calloc(size_t count, size_t size);
char    *ft_strjoin(char const *s1, char const *s2);

#endif