/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraled <smoraled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 14:52:01 by smoraled          #+#    #+#             */
/*   Updated: 2022/01/27 19:36:26 by smoraled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if ((len == 0) || (dst == src))
		return (dst);
	if (src > dst)
	{
		while (len-- > 0)
		{
			((unsigned char *) dst)[len] = ((unsigned char *) src)[len];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
