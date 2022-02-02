/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraled <smoraled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:56:24 by smoraled          #+#    #+#             */
/*   Updated: 2022/02/02 19:25:54 by smoraled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    if (! s1)  
        return (NULL);
    
    set++;
    return (0);
}
//     int ts;
  

//     if (!s1 || !set)
//         return (NULL);

//     ts = ft_strlen(s1);

//     return ();
// }


//     int i;
//     int j;

//     i = 0;
//     while (s1[i])
//     {
//         j = 0;
//         if (s1[i] == set[j])
//             j++
//         i++;
//     }
/*

ft_strtrim("      hola que tal      ", ' ')
hola que tal
*/
