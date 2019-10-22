/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkssiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 18:28:08 by abkssiba          #+#    #+#             */
/*   Updated: 2019/10/21 18:28:09 by abkssiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int     ft_get_len(int n)
{
    int len;

    len = 0;
    if (n < 0)
    {
        n *= -1;
        len++;
    }
    while (n > 0)
    {
        n = n / 10;
        len++;
    }
    return (len);
}

static void    ft_fill(char *str, int nbr, int sign, int len)
{
    long int n = nbr;
    if (n < 0)
    {
        sign = -1;
        n *= -1;
    }
    while (len--)
    {
        str[len] = n % 10 + '0';
        n = n / 10;
    }
    if (sign == -1 && !++len)
        str[len] = '-';
}

char    *ft_itoa(int n)
{
    int len;
    char *str;
    int last;
    int sign;

    sign = 1;
    len = ft_get_len(n);
    last = len;
    str = (char*)malloc(len + 1);
    if (!str)
        return 0;
    if (n == -2147483648)
        return ft_strdup("-2147483648");
    if (n == 0)
        return ft_strdup("0");
    ft_fill(str, n, sign, len);
    str[last] = '\0';
    return (str);
}