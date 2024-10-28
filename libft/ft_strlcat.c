/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tripham <tripham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:43:03 by tripham           #+#    #+#             */
/*   Updated: 2024/10/28 16:43:09 by tripham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *des, const char *src, size_t sizeOfDes)
{
  size_t i;
  size_t  des_len;
  size_t  src_len;

  des_len = ft_strlen(des);
  src_len = ft_strlen(src);
  i = 0;
  if (sizeOfDes <= des_len)
    return sizeOfDes + src_len;

  while (des_len + i + 1 < sizeOfDes && src[i])
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