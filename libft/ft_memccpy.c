/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tripham <tripham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:00:08 by tripham           #+#    #+#             */
/*   Updated: 2024/11/10 17:00:13 by tripham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *des, const void *src, int c, size_t size) {
    unsigned char *p_des = (unsigned char *)des;
    unsigned char *p_src = (unsigned char *)src;
    size_t i = 0;
    *p_des = '\0';
    while (i < size) {
        p_des[i] = p_src[i];  // Copy byte from src to des
        if (p_des[i] == (unsigned char)c) {
            return (void *)(des + i + 1);  // Return pointer after character
        }
        i++;
    }
    return NULL;
}
// #include <stdio.h>
// int main() {
//     char *src = "Banana, Avocado";
//     char des[20];
    
//     // Use your custom ft_memccpy function
//     char *result = (char *)ft_memccpy(des, src, ',', sizeof(des));
//     if (result != NULL) {
//         printf("Copied string: %s\n", des);
//         int i = 0;
//         printf("Pointer after character: %s\n", result);
//     } else {
//         printf("Character not found or no bytes copied.\n");
//     }

//     return 0;
// }