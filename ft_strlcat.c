/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkssiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 11:31:27 by abkssiba          #+#    #+#             */
/*   Updated: 2019/10/19 12:22:42 by abkssiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_src;
	size_t	len_dest;
	int i;
	int sz;
	int res;

	sz = size;
	i = 0;
	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	if (size < len_dest)
		res = size + len_src;
	else
		res = len_dest + len_src;
	while (src[i] && sz-- && len_dest < size - 1)
			dest[len_dest++] = src[i++];
		dest[len_dest] = '\0';
	return (res);
}
