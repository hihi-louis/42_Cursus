/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tripham <tripham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:23:12 by tripham           #+#    #+#             */
/*   Updated: 2024/11/04 18:20:44 by tripham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    size_t s1_len;
    size_t s2_len;
    char *str;

    if(!s1 && !s2)
        return (NULL);
    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);
    str = ft_calloc((s1_len + s2_len + 1), sizeof(char));
    if(!str)
        return (NULL);
    ft_memcpy(str, s1, sizeof(s1));
    ft_memcpy(str + s1_len, s2, s2_len);
    
    return (str);
    
}
// int main()
// {
//     char *s1 = "Helo ";
//     char *s2 = "Ba za";
//     char *res = ft_strjoin(s1, s2);
//     printf("%s", res);
//     free(res);
//     return 0;
// }