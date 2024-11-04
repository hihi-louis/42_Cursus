/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tripham <tripham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 20:41:59 by tripham           #+#    #+#             */
/*   Updated: 2024/11/04 20:49:00 by tripham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    long nbr;

    nbr = (long)n;
    if(nbr < 0)
    {
        nbr *= -1;
        ft_putchar_fd('-', fd);
    }
    if(nbr > 9)
    {
        ft_putnbr_fd(nbr / 10, fd);
        ft_putnbr_fd(nbr % 10, fd);
    }
    else
    {
        ft_putchar_fd(nbr + '0', fd);
    }
}