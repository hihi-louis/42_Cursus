/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tripham <tripham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 21:46:58 by tripham           #+#    #+#             */
/*   Updated: 2024/11/10 21:03:32 by tripham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *small, size_t len)
{
    size_t  sml_len;
    
    if(!big && !len)
        return (NULL);
    sml_len = ft_strlen(small);
    if(*small == '\0')
        return ((char *)big);
    while(*big && sml_len <= len)
    {
        if (ft_strncmp(big, small, sml_len) == 0)
            return ((char *)big);
        big++;
        len--;
    }
    return (NULL);
}

// int main(void)
// {
//     char *big = "What the fuck";
//     char *small = "the";
//     char *ptr;

//     ptr = ft_strnstr(big, small, 8);
//     printf("%s", ptr);
//     return 0;
// }