/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkssiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 14:14:32 by abkssiba          #+#    #+#             */
/*   Updated: 2019/10/17 15:42:32 by abkssiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *str;

	str = (unsigned char*)s;
	if (n == 0)
		return ;
	while (n > 0)
	{
		*str = '\0';
		n--;
		str++;
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
