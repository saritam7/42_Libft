/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraled <smoraled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:45:10 by smoraled          #+#    #+#             */
/*   Updated: 2022/02/03 20:10:05 by smoraled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int ft_tn(int n)
{
    int l = 0;

    if (n <= 0)
        l++;
    // if (n < 0)
    //      n = n * -1;
    while (n > 0)
    {
        n = n / 10; 
        l++;
    }
    return (l);
}

char *ft_itoa(int n)
{
    int l;
    char *s;

    l = ft_tn(n);
    s = (char *)malloc(sizeof(char) * (l + 1));
    if (s == NULL)
        return (NULL);
    if (n < 0)
        s[0] = '-';
    s[l] = '\0';
    if ( n == 0 )
        s[--l] = '0';
    while (n > 10)
    {
        s[--l] = (n % 10) + '0';
        n = n / 10;
    }
    return (s);
}

int main(void)
{
    char *str;

    str = ft_itoa(-1);
    printf("number is --> %s\n", str);
}