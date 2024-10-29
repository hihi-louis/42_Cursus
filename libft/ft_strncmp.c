/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tripham <tripham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:12:20 by tripham           #+#    #+#             */
/*   Updated: 2024/10/29 20:05:40 by tripham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while((s1[i] || s2[i]) && (s1[i] == s2[i]) && i < n)
    {
        i++;
    }
    if(n == 0)
        return (0);
    else
    {
        return ((unsigned char)s1[i] - (unsigned char)s2[i]);
    }
}

// int main()
// {
//     char str1[] = "ABCD";
//     char str2[] = "AbCDf";
//     printf("%d", ft_strncmp(str1, str2, 3));
//     return 0;
// }