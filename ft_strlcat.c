/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraled <smoraled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 14:18:05 by smoraled          #+#    #+#             */
/*   Updated: 2022/01/31 16:06:13 by smoraled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	ts;
	size_t	td;

	i = 0;
	ts = ft_strlen(src);
	td = ft_strlen(dst);
	if (td > dstsize)
		return (ts + dstsize);
	else
	{
		while (td + i + 1 < dstsize && src[i])
		{
			dst[td + i] = src[i];
			i++;
		}
	}
	dst[td + i] = '\0';
	return (td + ts);
}
