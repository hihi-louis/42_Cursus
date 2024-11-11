/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tripham <tripham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:23:12 by tripham           #+#    #+#             */
/*   Updated: 2024/11/11 16:35:51 by tripham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    size_t s1_len;
    size_t s2_len;
    char *str;
    
    if(!s1)
        return (ft_strdup(s2));
    if(!s2)
        return (ft_strdup(s1));
    if(!s1 && !s2)
        return (ft_calloc(1, sizeof(char))); 
    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);
    str = ft_calloc((s1_len + s2_len + 1), sizeof(char));
    if(!str)
        return (NULL);
    ft_memcpy(str, s1, s1_len);
    ft_memcpy(str + s1_len, s2, s2_len);
    return (str);
}
int main()
{
    char *s2 = NULL;
    char *s1 = "gdfkadf";
    char *res = ft_strjoin(s1, s2);
    printf("%s", res);
    free(res);
    return 0;
}