/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkssiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 13:01:36 by abkssiba          #+#    #+#             */
/*   Updated: 2019/10/22 13:01:38 by abkssiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

void ft_lstadd_back(t_list **alst, t_list *new)
{
    t_list *lst;

    lst = *alst;
    while (lst -> next)
    {
        lst = lst -> next;
    }
    lst -> next = new;
}
