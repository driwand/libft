/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkssiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 14:14:32 by abkssiba          #+#    #+#             */
/*   Updated: 2019/10/16 15:16:24 by abkssiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t len;
	size_t i;
	
	if (n == 0)
		return ;
	i = n;
	len = ft_strlen(s);
	if (n > len)
		i = 0;
	while (i < len)
	{
		*(char*)(s + i) = '\0';
		i++;
	}
}
/*
int main()
{
	char r[] = "hello";
	ft_bzero(r, 9);
	printf("%s",r);
	return 0;
}*/
