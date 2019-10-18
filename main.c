/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkssiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 11:39:56 by abkssiba          #+#    #+#             */
/*   Updated: 2019/10/18 14:07:38 by abkssiba         ###   ########.fr       */
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

	// ft_strdup	
	char t[6] = "hello";
	return (0);
}
