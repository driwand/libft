/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkssiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 12:48:23 by abkssiba          #+#    #+#             */
/*   Updated: 2019/10/18 14:08:40 by abkssiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	if (!dst && !src)
		return NULL;
	while (i < n)
	{
		if (*(unsigned char*)(dst + i) == (unsigned char)c)
			return (dst + i);
		*(unsigned char*)(dst + i) = *(unsigned char*)(src + i);
		i++;
	}
	return (NULL);
}
