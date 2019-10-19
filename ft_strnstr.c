/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkssiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 12:25:09 by abkssiba          #+#    #+#             */
/*   Updated: 2019/10/19 12:45:41 by abkssiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    char *str1;
    char *str2;
    size_t i;
    size_t j;
	size_t lens;

    i = 0;
    str1 = (char *)haystack;
    str2 = (char *)needle;
	lens = ft_strlen(str1);
    while (str1[i])
    {
        j = 0;
        while (str1[i + j] == str2[j] && str2[j] && len--)
            j++;
        if (!str2[j])
            return (str1 + i);
        i++;
    }
    return (NULL);
}
