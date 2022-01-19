/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraled <smoraled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:52:31 by smoraled          #+#    #+#             */
/*   Updated: 2022/01/19 17:12:05 by smoraled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>

size_t ft_strlen(const char *s)
{
    size_t cont;

    cont = 0;
    while (s[cont] != '\0')
    {
        cont++;
    }
    return(cont);
    
}