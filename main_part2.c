/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_part2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkssiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 15:43:15 by abkssiba          #+#    #+#             */
/*   Updated: 2019/10/20 15:43:17 by abkssiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <fcntl.h>

int main()
{
    // //ft_strjoin
	// printf("\033[1;31m");
	// printf("*** ft_strjoin ***\n");
	// printf("\033[0m");

	// char *big =    "hello";
	// char *little = "world";
	// printf("%s\n",ft_strjoin(big, little));

	// // ft_strtrim
	// printf("\033[1;31m");
	// printf("*** ft_strtrim ***\n");
	// printf("\033[0m");

	// char *s1 = "\t   s       k\n";
	// char *s2 = "";
	// printf("%s\n",ft_strtrim(s1, "\t\n "));

	// // ft_itoa
	// printf("\033[1;31m");
	// printf("*** ft_itoa ***\n");
	// printf("\033[0m");

	// printf("%s",ft_itoa(-0));

	//ft_putnbr_fd
	printf("\033[1;31m");
	printf("*** ft_putnbr_fd ***\n");
	printf("\033[0m");

	int r = open("kfile.txt", O_RDWR | O_CREAT , 0644);
	ft_putnbr_fd(2147483647, r);
	int c = L'ø';
	printf("\n %d  | %c \n",c,c);
}
