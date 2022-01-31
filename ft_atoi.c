/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraled <smoraled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:43:37 by smoraled          #+#    #+#             */
/*   Updated: 2022/01/31 17:43:56 by smoraled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_maxmin(unsigned long long int atoi, int sig)
{
	if (atoi > 9223372036854775807 && sig < 0)
		return (0);
	else if (atoi > 9223372036854775807 && sig > 0)
		return (-1);
	return ((int)(atoi * sig));
}

int	ft_atoi(const char *str)
{
	int						i;
	int						sig;
	unsigned long long int	atoi;

	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	sig = 1;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sig *= -1;
	atoi = 0;
	while (str[i] != 0)
	{
		if (str[i] <= '9' && str[i] >= '0')
		{
			atoi = ((atoi * 10) + (str[i] - '0'));
			i++;
		}
		else
			break ;
	}
	return (ft_maxmin (atoi, sig));
}
