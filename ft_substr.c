/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkssiba <abkssiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 17:04:50 by abkssiba          #+#    #+#             */
/*   Updated: 2021/05/24 16:23:31 by abkssiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*p;
	char	*r;
	size_t	l;

	if (!s)
		return (NULL);
	l = ft_strlen(&s[start]);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (l > len)
		l = len;
	str = (char *)malloc(l + 1);
	if (!str)
		return (str);
	p = (char *)(s + start);
	r = str;
	while (*p && l--)
		*str++ = *p++;
	*str = '\0';
	return (r);
}
