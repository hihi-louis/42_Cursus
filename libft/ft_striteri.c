/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tripham <tripham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:27:01 by tripham           #+#    #+#             */
/*   Updated: 2024/11/04 20:13:48 by tripham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int i;

    i = 0;
    if(!s)
        return ;
    while(s[i])
    {
        (*f)(i, &s[i]);
        i++;
    }
}

// void my_func(unsigned int i, char *c) 
// {
//     *c -= 32; 
// }

// int main()
// {
//     char str[] = "hello-there";
//     ft_striteri(str, my_func);
    
//     printf("%s", str);
//     return 0;
// }