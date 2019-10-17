/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkssiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 10:48:19 by abkssiba          #+#    #+#             */
/*   Updated: 2019/10/17 12:00:38 by abkssiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	iss;
	int		number;
	int 	sign;

	iss = 0;
	number = 0;
	sign = 1;
	while (str[iss] <= ' ')
		iss++;
	if (str[iss] == '-')
	{
		sign = -1;
		iss++;
	}
	while (iss < ft_strlen(str))
		number = number * 10 + str[iss++] - '0';
	return (number * sign);
}
