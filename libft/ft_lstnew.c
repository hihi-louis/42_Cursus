/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tripham <tripham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 20:58:27 by tripham           #+#    #+#             */
/*   Updated: 2024/11/04 22:00:11 by tripham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *new_node;

    new_node = (t_list *)malloc(sizeof(t_list));
    if(!new_node)
        return (NULL);
    new_node->content = content;
    new_node->next = NULL;
    return (new_node);
}
// int main()
// {
//     int content = 42;
//     t_list *node = ft_lstnew(&content);

//     char *content1 = "alala";
//     t_list *node1 = ft_lstnew(content1);
//     if(node && node1)
//     {
//         printf("Node content: %d\n", *(int *)(node->content));
//         free(node);

//         printf("%s\n", (char *)(node1->content));
//         free(node1);
//     }
    
//     return 0;
// }





// #include <stdio.h>
// #include <stdlib.h>

// typedef struct s_node {
//     int data;
//     struct s_node *next;
// } t_node;

// t_node *create_node(int data) {
//     t_node *new_node = (t_node *)malloc(sizeof(t_node));
//     if (!new_node) {
//         return NULL;
//     }
//     new_node->data = data;
//     new_node->next = NULL;
//     return new_node;
// }

// void append_node(t_node **head, int data) {
//     t_node *new_node = create_node(data);
//     if (!new_node) {
//         return;
//     }

//     if (*head == NULL) {
//         *head = new_node;
//         return;
//     }

//     t_node *current = *head;
//     while (current->next != NULL) {
//         current = current->next;
//     }

//     current->next = new_node;
// }

// void print_list(t_node *head) {
//     t_node *current = head;
//     while (current != NULL) {
//         printf("%d -> ", current->data);
//         current = current->next;
//     }
//     printf("NULL\n");
// }

// void free_list(t_node *head) {
//     t_node *current = head;
//     t_node *next_node;
//     while (current != NULL) {
//         next_node = current->next;
//         free(current);
//         current = next_node;
//     }
// }

// int main() {
//     t_node *head = NULL;

//     append_node(&head, 10);
//     append_node(&head, 20);
//     append_node(&head, 30);

//     printf("Linked list contents:\n");
//     print_list(head);

//     free_list(head); // Free memory when done

//     return 0;
// }