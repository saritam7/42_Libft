/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraled <smoraled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:11:42 by smoraled          #+#    #+#             */
/*   Updated: 2022/02/02 16:49:13 by smoraled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	lon_s;

	if (s == NULL)
		return (NULL);
	lon_s = ft_strlen(s);
	if (start > lon_s)
	{
		s2 = malloc(sizeof(char));
		if (s2 == NULL)
			return (NULL);
		s2[0] = '\0';
		return (s2);
	}
	if (len > lon_s - start)
		len = lon_s - start;
	s2 = malloc(len + 1);
	if (s2 == NULL)
		return (NULL);
	ft_strlcpy(s2, &s[start], len + 1);
	return (s2);
}
