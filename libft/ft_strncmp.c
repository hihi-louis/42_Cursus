/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tripham <tripham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:12:20 by tripham           #+#    #+#             */
/*   Updated: 2024/10/29 23:07:56 by tripham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while(i < n)
    {
        if(s1[i] != s2[i])
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        if(s1[i] == '\0')
            return (0);
        i++;
    }
    return (0); 
}

// int main()
// {
//     char str1[] = "ABCD";
//     char str2[] = "aBCD";
//     printf("%d", ft_strncmp(str1, str2, 3));
//     return 0;
// }