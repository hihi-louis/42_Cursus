/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tripham <tripham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:43:03 by tripham           #+#    #+#             */
/*   Updated: 2024/11/10 20:59:35 by tripham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *des, const char *src, size_t sizeOfDes)
{
  size_t i;
  size_t  des_len;
  size_t  src_len;

  if (!des && !sizeOfDes)
		return (0);
  des_len = ft_strlen(des);
  src_len = ft_strlen(src);
  i = 0;
  if (sizeOfDes <= des_len)
    return (sizeOfDes + src_len);
  while ((i< sizeOfDes - des_len - 1 )&& (src[i] != '\0'))
  {
      des[des_len + i] = src[i];
      i++;
  }
  des[des_len + i] = '\0';
  return (des_len + src_len);
}


// int main()
// {
//   char *src = "abcde";
//   char des[] = "ABCDE";
//   size_t size = ft_strlcat(des, src, 8);
//   printf("%zu", size);
//   return 0;
// }