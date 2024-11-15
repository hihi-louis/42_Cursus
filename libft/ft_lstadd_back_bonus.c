/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tripham <tripham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 19:10:45 by tripham           #+#    #+#             */
/*   Updated: 2024/11/11 19:04:27 by tripham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *last;
    if (!lst || !new)
        return ;
    if (*lst == NULL)
    {
        *lst = new;
        return ;
    }
    last = ft_lstlast(*lst);
    if(last != NULL)
        last->next = new;
    new->next = NULL; // == last->next->next = NULL;
}
// int main()
// {
//     t_list *lst = ft_lstnew("123");
//     t_list *node1 = ft_lstnew("abc");
//     t_list *node2 = ft_lstnew("asdfdsnfbc");
//     t_list *node3 = ft_lstnew("abc");
//     t_list *node4 = ft_lstnew("abc");
//     ft_lstadd_back(&lst, node1);
//     ft_lstadd_back(&lst, node2);
//     ft_lstadd_back(&lst, node3);
//     ft_lstadd_back(&lst, node4);
//     t_list *current = lst;
//     while(current)
//     {
//         printf("%s->",(char *)current->content);
//         current = current->next;
//     }
//     printf("NULL\n");
//     return 0;
// }

