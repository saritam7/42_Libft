/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraled <smoraled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:41:46 by smoraled          #+#    #+#             */
/*   Updated: 2022/02/02 17:31:57 by smoraled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		ts1;
	int		ts2;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	ts1 = ft_strlen(s1);
	ts2 = ft_strlen(s2);
	str = malloc (ts1 + ts2 + 1);
	if (str == 0)
		return (NULL);
	ft_strlcpy (str, s1, (ts1 + 1));
	ft_strlcat (str, s2, ts1 + ts2 + 1);
	return (str);
}
