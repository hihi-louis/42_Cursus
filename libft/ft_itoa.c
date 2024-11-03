/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tripham <tripham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 04:22:18 by tripham           #+#    #+#             */
/*   Updated: 2024/11/03 19:51:40 by tripham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t  count_digits(int n)
{
    size_t  i;

    i = 0;
    while(n /= 10)
        i++;
    return (i);
}
char    *ft_itoa(int n)
{
    char    *str;
    size_t  digits;
    long int    num;

    num = (long int)n;
    digits = count_digits(n);

    if(n < 0)
    {
        num *= -1;
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
//     char *str = ft_itoa(-14554464);
//     printf("%s\n", str);
//     printf("%s\n", str);
//     free(str);
//     return 0;   
// }