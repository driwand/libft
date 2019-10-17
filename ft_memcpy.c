/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkssiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 15:16:42 by abkssiba          #+#    #+#             */
/*   Updated: 2019/10/16 18:24:14 by abkssiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	n = 0;
	while (*(char*)src)
	{
		*(char*)dst = *(char*)src;
		dst++;
		src++;
	}
	return (dst);
}
/*
int main()
{
	char r[5] = "hello";
	char t[5] = "world";
	ft_memcpy(r, t, 5);
	printf("%s", r);
}*/
