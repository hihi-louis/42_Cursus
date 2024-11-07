/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tripham <tripham@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 20:30:44 by tripham           #+#    #+#             */
/*   Updated: 2024/11/07 19:13:34 by tripham          ###   ########.fr       */
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

int main()
{
    char *str = "ta la lu quy, o tan rung sau";
    t_list *list = ft_lstnew(str);
    
    int size = ft_lstsize(list);
    printf("%d\n", size);
    return 0;
    
    
}