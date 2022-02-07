/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraled <smoraled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 13:14:16 by smoraled          #+#    #+#             */
/*   Updated: 2022/02/07 13:27:26 by smoraled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *s;

    s = malloc (sizeof(t_list));
    if (s == NULL)
        return (NULL);
    s->content = content;
    s->next = NULL;
    return (s);
}
