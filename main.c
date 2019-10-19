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
	// char *e1 = "ahello";
	// char *e2 = "zworld";
	// printf("%d\n", memcmp(e1, e2, 1));

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
	//printf("\033[1;31m");
	// printf("*** ft_memchr ***\n");
	//printf("\033[0m");
	// char *b = "hello";
	// ft_memchr(b, 'e', 5);
	// printf("%p\n",ft_memchr(b, 'e', 5));

	// ft_strnstr
	printf("\033[1;31m");
	printf("*** ft_strnstr ***\n");
	printf("\033[0m");
	char *big = "helpo";
	char *little = "l";
	printf("%s\n",strnstr(big, little, 2));

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