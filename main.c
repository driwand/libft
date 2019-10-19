/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkssiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 11:39:56 by abkssiba          #+#    #+#             */
/*   Updated: 2019/10/19 12:37:39 by abkssiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
int main(void)
{
	// // ft_memccpy
	//printf("\033[1;31m");
	// printf("*** ft_memccpy ***\n");
	//printf("\033[0m");

	// char *t1;
	// char t2[5] = "world";
	// ft_memccpy(t1, t2, 'o', 2);
	// printf("%s\n",t1);

	// // ft_calloc
	//printf("\033[1;31m");
	// printf("*** ft_calloc ***\n");
	//printf("\033[0m");

	// char *r = NULL;
	// r = ft_calloc(2, sizeof(char));
	// r[0] = '1';
	// r[1] = '3';
	// printf("%s\n", r);

	// // ft_memcmp
	// printf("\033[1;31m");
	// printf("*** ft_memcmp ***\n");
	// printf("\033[0m");
	// char *e1 = "atoms\0\0\0\0";
	// char *e2 = "atoms\0abc";
	// printf("%d\n", ft_memcmp(e1, e2, 8));

	// // ft_strchr
	// printf("\033[1;31m");
	// printf("*** ft_strchr ***\n");
	// printf("\033[0m");

	// char *s = "worldlp";
	// printf("%s\n", ft_strchr(s, 'l'));

	// // ft_strrchr
	// printf("\033[1;31m");
	// printf("*** ft_strrchr ***\n");
	// printf("\033[0m");
	// char *ss = "worldlp";
	// printf("%s\n", ft_strrchr(ss, 'l'));

	// // ft_strnstr
	// printf("\033[1;31m");
	// printf("*** ft_strnstr ***\n");
	// printf("\033[0m");

	// // ft_memchr
	// printf("\033[1;31m");
	// printf("*** ft_memchr ***\n");
	// printf("\033[0m\n");
	// char *b = "hello world";
	// printf("%s\n",memchr(b, '\0', 12));

	// ft_strnstr
	printf("\033[1;31m");
	printf("*** ft_strnstr ***\n");
	printf("\033[0m");
	char *big =    "123456789";
	char *little = "9";
	printf("%s\n",ft_strnstr(big, little, 7));


	// // ft_strdup
	// char t[6] = "hello";

	// // ft_bzero
	//printf("\033[1;31m");
	// printf("*** ft_bzero ***\n");
	//printf("\033[0m");
	// int *arr = malloc(4 * sizeof(int));
	// for (int i = 0; i < 4; i++)
	// 	arr[i] = 1;
	// ft_bzero(arr, 16);
	// for (int i = 0; i < 4; i++)
	// 	printf("%i ", arr[i]);
	return (0);
}
