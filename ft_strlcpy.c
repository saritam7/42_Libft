/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraled <smoraled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 14:10:33 by smoraled          #+#    #+#             */
/*   Updated: 2022/01/28 20:43:01 by smoraled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
   size_t	i;
 

	i = 0;
	if (dstsize == 0)
		return ();
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	return (i);
}