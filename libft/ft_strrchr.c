/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tripham <tripham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:24:15 by tripham           #+#    #+#             */
/*   Updated: 2024/10/29 19:08:55 by tripham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    char chr;
    char *res;

    i = 0;
    chr = (char) c;
    while(s[i])
    {
        if(chr == s[i])
            return ((char *) &s[i]);
        i++;
    }
    if(s[i] == c)
        res = (char *) &s[i];
    return res;
}

// int main(void)
// {
//     char *str = "ahaha quan que";
//     int c = ' ';
//     printf("%s",  ft_strrchr(str, c));
//     return 0;
// }