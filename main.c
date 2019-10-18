/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkssiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 11:39:56 by abkssiba          #+#    #+#             */
/*   Updated: 2019/10/18 20:32:26 by abkssiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
int main(void)
{
	// ft_memccpy
	printf("*** ft_memccpy ***\n");
	char *t1;
	char t2[5] = "world";
	ft_memccpy(t1, t2, 'o', 2);
	printf("%s\n",t1);

	// ft_calloc
	printf("*** ft_calloc ***\n");
	char *r = NULL;
	r = ft_calloc(2, sizeof(char));
	r[0] = '1';
	r[1] = '3';
	printf("%s\n", r);

	// ft_strchr
	printf("*** ft_strchr ***");
	char *s = "world";
	printf("%s\n", ft_strchr(s, '\0'));

	// ft_memchr
	printf("*** ft_memchr ***\n");
	char *b = "hello";
	ft_memchr(b, 'e', 5);
	printf("%s\n",memchr(b, 'e', 5));

	// ft_strdup
	char t[6] = "hello";

	// ft_bzero
	printf("*** ft_bzero ***\n");
	int *arr = malloc(4 * sizeof(int));
	for (int i = 0; i < 4; i++)
		arr[i] = 1;
	ft_bzero(arr, 16);
	for (int i = 0; i < 4; i++)
		printf("%i ", arr[i]);
	return (0);
}
