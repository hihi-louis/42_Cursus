/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tripham <tripham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:08:30 by tripham           #+#    #+#             */
/*   Updated: 2024/11/09 16:28:45 by tripham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_list;
    t_list  *new_node;
    
    new_list = NULL;
    if(!lst || !f || !del)
        return (NULL);
     while(lst)
     {
        new_node = ft_lstnew(f(lst->content));
        if(!new_node)
        {
            ft_lstclear(&new_list, del);
            return (NULL);
        }
        ft_lstadd_back(&new_list, new_node);
        lst = lst->next;
     }
     return (new_list);
}
// void *duplicate_content(void *content)
// {
//     // Duplicate the content assuming it's a string (use strdup or write your own duplicator)
//     return (ft_strdup((char *)content));
// }

// // Sample function to delete node content
// void delete_content(void *content)
// {
//     // Free the content assuming it's dynamically allocated
//     free(content);
// }

// // Function to print the list (for testing purposes)
// void print_list(t_list *list)
// {
//     while (list)
//     {
//         printf("%s -> ", (char *)list->content);
//         list = list->next;
//     }
//     printf("NULL\n");
// }

// int main(void)
// {
//     // Create a sample linked list
//     t_list *list = ft_lstnew(ft_strdup("Node 1"));
//     ft_lstadd_back(&list, ft_lstnew(ft_strdup("Node 2")));
//     ft_lstadd_back(&list, ft_lstnew(ft_strdup("Node 3")));
//     ft_lstadd_back(&list, ft_lstnew(ft_strdup("Node 4")));

//     // Print the original list
//     printf("Original list:\n");
//     print_list(list);

//     // Apply ft_lstmap to create a new list
//     t_list *new_list = ft_lstmap(list, duplicate_content, delete_content);

//     // Print the new list
//     printf("\nNew list after applying ft_lstmap:\n");
//     print_list(new_list);

//     // Free the memory used by both lists
//     ft_lstclear(&list, delete_content);
//     ft_lstclear(&new_list, delete_content);
//     return 0;
// }