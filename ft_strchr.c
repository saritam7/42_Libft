/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraled <smoraled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:25:48 by smoraled          #+#    #+#             */
/*   Updated: 2022/01/26 19:55:40 by smoraled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    // if (s == NULL)
    //     return (NULL);
    while (s[i] != '\0')
    {
        if (s[i] == (char)c)
            //return ((char *) s + i);
            return ((char *) &s[i]);
        i++;
    }
    return (NULL);


    // while (s[i] != '\0' && s[i] !=  c)
    //     i++;
    // mientras s[i] != c
        // sigue mirando

    
    // si estoy aquí, i == c o final de la palabra (no la he encontrado)
    
    
    // si s[i] == c
        // return (&s[i])
        // return (s + i)
    // else
        // return (NULL)


    // while (s[i++] != c)
    //     return (&s[i]);
    //     return (s + i);

    // if (s[i] == '\0')
    //     return (NULL);
}

/**
 *      s[i]      *(s + i)
 *     &s[i]       (s + i)
 * */