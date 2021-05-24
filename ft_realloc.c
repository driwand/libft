/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkssiba <abkssiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 13:35:09 by abkssiba          #+#    #+#             */
/*   Updated: 2021/05/24 16:40:24 by abkssiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	arr_count(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}

char	**ft_realloc(char **arr, char *line)
{
	char	**newarr;
	int		count;
	int		i;

	i = 0;
	count = arr_count(arr);
	newarr = malloc((count + 2) * sizeof(char *));
	while (i < count)
	{
		newarr[i] = ft_strdup(arr[i]);
		i++;
	}
	newarr[i] = ft_strdup(line);
	newarr[i + 1] = NULL;
	return (newarr);
}
