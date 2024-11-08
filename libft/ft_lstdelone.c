/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tripham <tripham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:58:33 by tripham           #+#    #+#             */
/*   Updated: 2024/11/08 22:48:22 by tripham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if(!lst)
        return ;
    (*del)(lst->content);
    free(lst);    
}
// void ft_del(void *content)
// {
//     free(content);
// }
// int main()
// {
//     t_list *lst = ft_lstnew(ft_strdup("123"));
//     t_list *node1 = ft_lstnew(ft_strdup("abc"));
//     t_list *node2 = ft_lstnew(ft_strdup("asdfdsnfbc"));
//     t_list *node3 = ft_lstnew(ft_strdup("xyz"));
//     t_list *node4 = ft_lstnew(ft_strdup("abc545"));
//     lst->next = node1;
//     node1->next = node2;
//     node2->next = node3;
//     node3->next = node4;
//     node4->next = NULL;
    
//     t_list *next = node3;
//     ft_lstdelone(node2,ft_del);
//     node1->next = node3;
//     t_list *current = lst;
//     while(current)
//     {
//         printf("%s->",(char *)current->content);
//         current = current->next;
//     }
//     printf("NULL\n");
//     return 0;
// }
