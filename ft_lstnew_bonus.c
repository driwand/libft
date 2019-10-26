/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkssiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 13:01:58 by abkssiba          #+#    #+#             */
/*   Updated: 2019/10/26 14:55:30 by abkssiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *newlist;

    newlist = ft_calloc(sizeof(newlist), 1);
    if (!newlist)
        return (NULL);
    newlist -> content = content;
    newlist -> next = NULL;
    return (newlist);
}
