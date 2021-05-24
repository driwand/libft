/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkssiba <abkssiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 10:48:19 by abkssiba          #+#    #+#             */
/*   Updated: 2021/05/24 16:03:43 by abkssiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		iss;
	long	value;
	long	number;
	int		sign;

	iss = 0;
	number = 0;
	sign = 1;
	while ((str[iss] == ' ' || (str[iss] >= '\t' && str[iss] <= '\r'))
		&& str[iss] != '\0')
		iss++;
	if (str[iss] == '-' || str[iss] == '+')
		if (str[iss++] == '-')
			sign = -1;
	while (ft_isdigit(str[iss]))
	{
		value = number;
		number = (number * 10) + (sign * (str[iss++] - '0'));
		if (sign == 1 && value > number)
			return (-1);
		else if (sign == -1 && value < number)
			return (0);
	}
	return (number);
}
