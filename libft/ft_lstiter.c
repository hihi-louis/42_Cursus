/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tripham <tripham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 00:11:18 by tripham           #+#    #+#             */
/*   Updated: 2024/11/09 01:06:51 by tripham          ###   ########.fr       */
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
void    print_content(void *content)
{
    printf("%d ", *(int *)content);
}
void ft_del(void *content)
{
    free(content);
}

int main()
{
    int a = 10, b = 20, c = 30;
    t_list *node = ft_lstnew(&a);
    node->next = ft_lstnew(&b);
    node->next->next = ft_lstnew(&c);
    ft_lstiter(node, print_content);
    ft_lstclear(&node, ft_del);
    return 0;
}