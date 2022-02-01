/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraled <smoraled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:18:37 by smoraled          #+#    #+#             */
/*   Updated: 2022/02/01 18:23:15 by smoraled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*s;
	size_t			len;

	s = malloc (count * size);
	if (s == NULL)
		return (NULL);
	len = 0;
	while (len < (count * size))
	{
		s[len++] = 0;
	}
	return ((void *) s);
}
