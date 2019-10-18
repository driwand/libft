/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkssiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 12:48:23 by abkssiba          #+#    #+#             */
/*   Updated: 2019/10/18 12:55:02 by abkssiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	if (!src && !dst)
		return (NULL);
	while (*(unsigned char*)src && n-- && *(unsigned char*)src != c)
	{
		*(unsigned char*)dst = *(unsigned char*)src;
		dst++;
		src++;
	}
	return (dst);
}
