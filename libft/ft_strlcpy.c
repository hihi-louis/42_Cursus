/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tripham <tripham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:43:19 by tripham           #+#    #+#             */
/*   Updated: 2024/10/28 16:43:27 by tripham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *des, const char * src, size_t size)
{
    size_t  i;

    i = 0;
    while (src[i] && i < size)
    {
            des[i] = src[i];
            i++;
    }
    while(i < size)
    {
        des[i] = '\0';
        i++;
    }
        return (ft_strlen(des));
}

int main()
{
    char src[] = "Hello";
    char des[] = "aha ";

    size_t res = ft_strlcpy(des, src, sizeof(src));
    printf("%d\n", res);
    return 0;
}