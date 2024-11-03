/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tripham <tripham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:43:19 by tripham           #+#    #+#             */
/*   Updated: 2024/11/03 02:16:31 by tripham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *des, const char * src, size_t size)
{
    size_t  i;
    size_t  len_src;

    i = 0;
    len_src = ft_strlen(src);
    if(size == 0)
        return(len_src);
    while (src[i] && i < size - 1)
    {
            des[i] = src[i];
            i++;
    }
    des[i] = '\0';
    return (len_src);
}

// int main()
// {
//     char *src = "Hello";
//     char des[3];

//     size_t res = ft_strlcpy(des, src, 5);
   
//         printf("%s\n", des);
    
//     printf("%zu", res);
//     return 0;
// }