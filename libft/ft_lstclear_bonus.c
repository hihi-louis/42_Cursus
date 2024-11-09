/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tripham <tripham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 22:50:02 by tripham           #+#    #+#             */
/*   Updated: 2024/11/09 16:28:35 by tripham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *node;
    if(!lst || !del || !(*lst))
        return ;
    while(*lst)
    {
        node = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = node;
    }
    *lst = NULL;
}