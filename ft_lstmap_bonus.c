/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkssiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 14:06:38 by abkssiba          #+#    #+#             */
/*   Updated: 2019/10/24 14:06:42 by abkssiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list *new;
    t_list *tmp;
    t_list *head;

    head = lst;
    if (!lst || !f || !del)
        return (NULL);
    while (lst)
    {
        tmp = ft_lstnew(f(head->content));
        if (!tmp)
        {
            ft_lstclear(&new, del);
            return (NULL);
        }
        ft_lstadd_back(&new, tmp);
        head = head->next;
    }
    return (new);
}