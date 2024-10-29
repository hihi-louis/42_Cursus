/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tripham <tripham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:45:03 by tripham           #+#    #+#             */
/*   Updated: 2024/10/29 18:23:38 by tripham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;
    char chr;

    i = 0;
    chr = (char) c;
    while(s[i])
    {
        if(chr == s[i])
            return ((char *) &s[i]);
        i++;
    }
    return NULL;
}

// int main()
// {
//     char *str = "ahaha quan que";
//     int c = ' ';
//     printf("%s",  ft_strchr(str, c));
//     return 0;

// }