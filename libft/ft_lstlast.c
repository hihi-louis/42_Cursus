/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tripham <tripham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:57:38 by tripham           #+#    #+#             */
/*   Updated: 2024/11/08 19:09:58 by tripham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    t_list *node;

    if(!lst)
        return (NULL);
    node = lst;
    
    while(node->next)
        node = node->next;
    
    return (node);
}

// int main()
// {
//     t_list *node_last = ft_lstnew("jaja");
//     t_list *node_first = ft_lstnew("haaja");
//     node_first->next = node_last;
    
//     printf("%s->%s",(char *)(node_first->content), (char *)(ft_lstlast(node_first)->content));
//     return 0;
// }