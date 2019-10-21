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

int     ft_get_len(int n)
{
    int len;

    len = 1;
    while ((n / 10) > 9)
    {
        
        n = n / 10;
        len++;
    }printf(" %d ",len);
    
    return (len);
}

char    *ft_itoa(int n)
{
    int tem;

    tem = n;
    ft_get_len(n);
    return NULL;
}