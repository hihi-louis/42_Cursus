/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tripham <tripham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 20:15:24 by tripham           #+#    #+#             */
/*   Updated: 2024/11/04 20:50:55 by tripham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

// int main()
// {
//     ft_putchar_fd('F', 1);
//     ft_putchar_fd('u', 1);
//     ft_putchar_fd('c', 1);
//     ft_putchar_fd('k', 2);
//     ft_putchar_fd('0', -1);
//     return 0;
// }
// #include <fcntl.h> // For open()
// int main() {
//     int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644); // Open file for writing
//     if (fd < 0) {
//         perror("Error opening file");
//         return 1;
//     }

//     printf("Test Case 4: Writing to a File\n");
//     ft_putchar_fd('H', fd); // Should write 'H' to output.txt
//     ft_putchar_fd('i', fd); // Should write 'i' to output.txt
//     ft_putchar_fd('!', fd); // Should write '!' to output.txt
//     close(fd); // Close the file

//     // Informing user that the characters were written
//     printf("Characters 'Hi!' were written to output.txt\n");
//     return 0;
// }