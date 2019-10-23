/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkssiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 17:04:50 by abkssiba          #+#    #+#             */
/*   Updated: 2019/10/23 16:20:03 by abkssiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;
	char *p;
	char *r;

	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (!(str = (char *)malloc(len + 1)) || !s)
		return (str);
	p = (char*)(s + start);
	r = str;
	while (*p && len--)
		*str++ = *p++;
	*str = '\0';
	return (r);
}
