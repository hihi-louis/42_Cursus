/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tripham <tripham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:43:19 by tripham           #+#    #+#             */
/*   Updated: 2024/11/01 23:26:26 by tripham          ###   ########.fr       */
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
//     char src[] = "Hello";
//     char des[] = "aha ";

//     size_t res = ft_strlcpy(des, src, 10);
//     printf("%zu", res);
//     return 0;
// }