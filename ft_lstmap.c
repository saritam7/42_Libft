/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraled <smoraled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:15:22 by smoraled          #+#    #+#             */
/*   Updated: 2022/02/09 15:17:29 by smoraled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new;
    t_list *lstnew;

    if (lst == NULL || f == NULL)
        return (NULL);
    lstnew = NULL;
    new = ft_lstnew (f(lst->content));
    if (new == NULL)
        return (NULL);
    lstnew = new;
    while (lst->next != NULL)
   {
        lst = lst->next;
        new->next = ft_lstnew (f(lst->content));
        if (new->next == NULL)
        {
            ft_lstclear (&lstnew, del);
            return (NULL);
        }
        new = new->next;
    }
    return (lstnew);
}