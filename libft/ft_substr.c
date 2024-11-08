/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tripham <tripham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:19:57 by tripham           #+#    #+#             */
/*   Updated: 2024/11/04 18:26:36 by tripham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(const char *s, unsigned int start, size_t len)
{
    char *ptr;
    size_t  i;
    size_t s_len;

    i = 0;
    if(!s)
        return (NULL);
    if(start >= len)
        return (ft_strdup(""));
    s_len = ft_strlen(s);
    if(len > ft_strlen(s + start))
        len = ft_strlen(s + start);
    ptr = ft_calloc(len + 1, sizeof(char));
    if(!ptr)
        return(NULL);
    while(i < len)
    {
        ptr[i] = s[start + i];
        i++;
    }
    return (ptr);
}

// int main()
// {
//     char *res = ft_substr("Bonjour comment ca va?", 5, 58);
//     printf("%s", res);
//     free(res);
//     return 0;
// }
