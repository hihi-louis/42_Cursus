/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tripham <tripham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:06:41 by tripham           #+#    #+#             */
/*   Updated: 2024/11/04 17:53:42 by tripham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *result;
    unsigned int    i;

    if(!s || !f)
        return (NULL);
    result = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
    if(!result)
        return (NULL);
    i = 0;
    while(s[i])
    {
        result[i] = (*f)(i, s[i]);
        i++;
    }
    result[i] = '\0';
    return (result);
}
// char my_func(unsigned int i, char c) {
//     return c - 32;
// }

// int main()
// {
//     char *str = "hello-there";
//     char*result = ft_strmapi(str, my_func);
//     printf("%s", result);
// }