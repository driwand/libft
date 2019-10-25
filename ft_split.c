/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkssiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 13:03:04 by abkssiba          #+#    #+#             */
/*   Updated: 2019/10/24 14:01:40 by abkssiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	**ft_get_arr(char const *str, char c)
{
	char	**arr;
	int		count;
	int		i;
	int		j;

	j = 0;
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		j = i;
		while (str[j] != c && str[j] != '\0')
			j++;
		if (j > i)
		{
			count++;
			i = j - 1;
		}
		i++;
	}
	arr = (char**)malloc((count + 1) * sizeof(char*));
	return (arr);
}

char			**ft_split(char const *s, char c)
{
	char	**str;
	int		count;
	int		i;
	int		j;

	if (!s || !(str = ft_get_arr(s, c)))
		return (NULL);
	count = 0;
	i = -1;
	while (s[++i] != '\0')
	{
		j = i;
		while (s[j] != c && s[j] != '\0')
			j++;
		if (j > i)
		{
			str[count] = (char *)malloc((j - i + 1) * sizeof(char));
			if (!str)
			{
				free(str);
				return (NULL);
			}
			ft_strlcpy(str[count], s + i, j - i + 1);
			i = j - 1;
			count++;
		}
	}
	str[count] = 0;
	return (str);
}
