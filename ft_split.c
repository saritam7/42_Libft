/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraled <smoraled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 16:50:40 by smoraled          #+#    #+#             */
/*   Updated: 2022/02/10 17:31:55 by smoraled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t ft_longs(char const *s, char c)
{
    size_t cont;
    size_t i;

    cont = 1;
    i = 0;
    if (s == NULL)
        return (0);
    while (s[i]) 
    {
        if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
            cont++;
        i++;
    }
    if (s[0] == c )
        cont--;
    return (cont);
}

static char **ft_freesplit(char **array)
{
    size_t i;

    i = 0;
    while (array[i] != NULL)
    {
        free(array[i]);
        i++;
    }
    free(array);
    return (NULL);
}

char **ft_split(char const *s, char c)
{
    char **array;
    size_t i;
    size_t x;
    char *len;

    array = malloc(sizeof(char *) * (ft_longs(s, c) + 1));
    if (array == NULL)
        return (NULL);
    i = 0;
    x = 0;
    while (s[i]) 
    {
        while (s[i] && s[i] == c)
            i++;
        if (s[i] && s[i] != c)
        {
            len = ft_strchr(&s[i], c);
            if (len == NULL)
                len = (char *) s + ft_strlen(s);
            array[x] = ft_substr(s, i, len - &s[i]);
            if (array[x] == NULL)
                return ft_freesplit(array);
            x++;
            i = i + (len - &s[i]);
        }
    }
    array[x] = NULL;
    return (array);
}

