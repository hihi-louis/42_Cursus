/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tripham <tripham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 00:11:18 by tripham           #+#    #+#             */
/*   Updated: 2024/11/09 16:28:40 by tripham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstiter(t_list *lst, void(*f)(void *))
{
    t_list *tpm;

    if(!lst || !f)
        return ;
    tpm = lst;
    while(tpm)
    {
       f(tpm->content);
        tpm = tpm->next; 
    }  
}
// void    print_content(void *content)
// {
//     printf("%s ->", (char *)content);
// }

// int main()
// {
//    t_list *node1 = ft_lstnew(ft_strdup("Hello"));
//    ft_lstadd_back(&node1, ft_lstnew(ft_strdup("Node2")));
//    ft_lstadd_back(&node1, ft_lstnew(ft_strdup("Node3")));
//    ft_lstadd_back(&node1, ft_lstnew(ft_strdup("Node4")));

//    ft_lstiter(node1, print_content);
//    printf("NULL");
//    return 0;
// }