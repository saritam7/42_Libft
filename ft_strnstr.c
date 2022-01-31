/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraled <smoraled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:33:21 by smoraled          #+#    #+#             */
/*   Updated: 2022/01/31 17:04:55 by smoraled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    if (needle[i] == '\0')
        return ((char *) haystack);
    while (haystack[i] && i <  len)
    {
        j = 0;
        if (needle[i] == haystack[j])
        {
            return ((char *) &haystack[i]);
        }
        i++;
    }
    return (0);
}
