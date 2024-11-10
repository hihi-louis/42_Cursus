/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tripham <tripham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 20:30:44 by tripham           #+#    #+#             */
/*   Updated: 2024/11/10 16:59:22 by tripham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int i;
    t_list *tmp;

    tmp = lst;
    i = 0;
    while(tmp != NULL)
    {
        i++;
        tmp = tmp->next; 
        
    }
    return (i);
}

// int main()
// {
//     char *str = "ta la lu quy, o tan rung sau";
//     char *str1 = "ta la lu quy, o tan rung sau";
//     char *str2 = "ta la lu quy, o tan rung sau";
//     char *str3 = "ta la lu quy, o tan rung sau";
//     char *str4 = "ta la lu quy, o tan rung sau";

//     t_list *list = ft_lstnew(str);
//     t_list *node1 = ft_lstnew(str1);
//     t_list *node2 = ft_lstnew(str2);
//     t_list *node3 = ft_lstnew(str3);
//     t_list *node4 = ft_lstnew(str4);

//     list->next = node1;
//     node1->next = node2;
//     node2->next = node3;
//     node3->next = node4;

//     int size = ft_lstsize(list);
//     printf("%d\n", size);
//     return 0;
// }