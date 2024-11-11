/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tripham <tripham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 04:22:18 by tripham           #+#    #+#             */
/*   Updated: 2024/11/11 18:14:44 by tripham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t  count_digits(int n)
{
    size_t  i;

    if (n == 0)
        return (1);
    i = 0;
    while(n != 0)
    {
        n /= 10;
        i++;
    }

    return (i);
}
char    *ft_itoa(int n)
{
    char    *str;
    size_t  digits;
    long    num;

    num = (long)n;
    digits = count_digits(n);

    if(n < 0)
    {
        num = -num;
        digits++;
    }
    
    if(!(str = (char *)malloc(sizeof(char) * (digits + 1))))
        return (NULL);
    str[digits] = '\0';
    while (digits--)
    {
        str[digits] = num % 10 + '0';
        num /= 10;
    }
    if(n < 0)
        str[0] = '-';
    return (str);
}

// int main()
// {
//     char *str = ft_itoa(0);
//     printf("%s\n", str);
//     printf("%s\n", str);
//     free(str);
//     return 0;   
// }