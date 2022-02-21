/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraled <smoraled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 16:50:40 by smoraled          #+#    #+#             */
/*   Updated: 2022/02/15 16:45:17 by smoraled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_longs(char const *s, char c)
{
	size_t	cont;
	size_t	i;

	cont = 1;
	i = 0;
	if (s == NULL)
		return (0);
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			cont++;
		i++;
	}
	if (s[0] == c)
		cont--;
	return (cont);
}

static char	**ft_freesplit(char **array)
{
	size_t	i;

	i = 0;
	while (array[i] != NULL)
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

static char	*ft_create(char const *s, size_t i, char c)
{
	char	*len;

	len = ft_strchr(&s[i], c);
	if (len == NULL)
		len = (char *) s + ft_strlen(s);
	return (len);
}

static char	**ft_creasplit(const char *s, char c)
{
	if (s == NULL)
		return (NULL);
	return (malloc(sizeof(char *) * (ft_longs(s, c) + 1)));
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	i;
	size_t	x;
	char	*len;

	array = ft_creasplit(s, c);
	if (array == NULL)
		return (NULL);
	i = 0;
	x = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			len = ft_create(s, i, c);
			array[x] = ft_substr(s, i, len - &s[i]);
			if (array[x++] == NULL)
				return (ft_freesplit(array));
			i = i + (len - &s[i]);
		}
	}
	array[x] = NULL;
	return (array);
}
