/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkssiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 10:48:19 by abkssiba          #+#    #+#             */
/*   Updated: 2019/10/17 14:36:53 by abkssiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	iss;
	unsigned long		number;
	int 	sign;

	iss = 0;
	number = 0;
	sign = 1;
	while ((str[iss] == ' ' || (str[iss] >= '\t' && str[iss] <= '\r'))
			&& str[iss] != '\0')
		iss++;
	if (str[iss] == '-' || str[iss] == '+')
	{
		if (str[iss] == '-')
			sign = -1;
		iss++;
	}
	while (ft_isdigit(str[iss]))
	{
		number = number * 10 + str[iss++] - '0';
		if (number > 2147483647 && sign == 1)
			return (-1);
		else if (number > 2147483648 && sign == -1)
			return (0);
	}
	return (number * sign);
}
