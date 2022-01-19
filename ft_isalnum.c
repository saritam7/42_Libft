/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraled <smoraled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 20:00:15 by smoraled          #+#    #+#             */
/*   Updated: 2022/01/19 20:24:55 by smoraled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c);
int ft_isdigt(int c);

int ft_isalnum(int c)
{
    if (ft_isalpha(c) || ft_isdigt(c)) 
        return (1);
    return(0);

}
