/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraled <smoraled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 13:53:04 by smoraled          #+#    #+#             */
/*   Updated: 2022/01/20 20:21:32 by smoraled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

void *ft_memset(void *b, int c, size_t len)
{
    size_t i;
    //unsigned char* direccion;

    i = 0;
    //direccion = (unsigned char*) b;
    while(i < len)
    {
        // *(b + i)

        // b = "hola"
        // i = 1
        // (b + i) = "ola" (void*)
        // ((unsigned char*) b + i) = "ola" (unsigned char*)
        // *((unsigned char*) b + i) = 'o' (unsigned char)
        //*((unsigned char*) b + i) = (unsigned char) c;


        // b = "hola"
        // |h|o|l|a|\0||||
        // ||||h||||o|
        // i = 1
        // (b + i) = "ola" (void*)
        // ((unsigned char*) b + i) = "ola" (unsigned char*)
        // *((unsigned char*) b + i) = 'o' (unsigned char)
        ((unsigned char *) b)[i] = (unsigned char)c;
        // direccion[i] = (unsigned char)c;
        // *(direccion + i) = (unsigned char)c;
        i++;
    }
    return(b);
}