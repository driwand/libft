/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkssiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 11:39:56 by abkssiba          #+#    #+#             */
/*   Updated: 2019/10/18 11:52:32 by abkssiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
	// ft_calloc
	printf("*** ft_calloc ***");
	char *r = NULL;
	r = ft_calloc(2, sizeof(char));
	r[0] = '1';
	r[1] = '3';
	printf("%s", r);

	// ft_strdup	
	char t[6] = "hello";

	return (0);
}
