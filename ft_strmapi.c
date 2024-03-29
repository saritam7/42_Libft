/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraled <smoraled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:51:28 by smoraled          #+#    #+#             */
/*   Updated: 2022/02/04 15:06:09 by smoraled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		l;
	char	*news;
	int		i;

	if (s == NULL)
		return (NULL);
	l = ft_strlen(s);
	news = (char *)malloc(sizeof(char) * (l + 1));
	if (news == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		news[i] = f(i, s[i]);
		i++;
	}
	news[i] = '\0';
	return (news);
}
