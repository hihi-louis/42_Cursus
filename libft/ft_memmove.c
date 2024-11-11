/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tripham <tripham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:14:14 by tripham           #+#    #+#             */
/*   Updated: 2024/11/11 16:47:04 by tripham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
  void  *org_dst;
  
  org_dst =  dst;

  if ((!dst && !src) || (dst == src))
    return (dst);
  if (dst < src)
  {
    while (len--)
      *(char *)dst++ = *(char *)src++;
  }
  else if (dst > src)
  {
    while (len--)
      ((char *)dst)[len] = ((char *)src)[len];
  }
  return (org_dst);
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
