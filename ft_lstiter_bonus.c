/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkssiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 14:06:56 by abkssiba          #+#    #+#             */
/*   Updated: 2019/10/24 14:06:57 by abkssiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list *tmp;
    tmp = lst;

    while (tmp)
    {
        f(tmp -> content);
        tmp = tmp -> next;
    }
}