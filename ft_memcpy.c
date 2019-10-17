/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkssiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 15:16:42 by abkssiba          #+#    #+#             */
/*   Updated: 2019/10/17 17:35:05 by abkssiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	while (n > 0)
	{
		*(unsigned char*)dst = *(unsigned char*)src;
		dst++;
		src++;
		n--;
	}
	return (dst);
}

