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
    static t_list * temp;

    if(!temp)
        temp = lst->content;
    if (lst)
    {
        new = ft_lstnew(f((char *)lst->content));
        new -> next = ft_lstmap(lst ->next, f, del);
        del(lst->content);
        // lst->content = 0;
        free(lst->content);
        return (new);
    }
    return (NULL);
    // t_list  *new_lst;
    // t_list *head;
    // t_list *prev;

    // int     size;
    // if (!lst && !f && !del)
    //     return (NULL);
    
    // size = ft_lstsize(lst);
    // new_lst = ft_lstnew(f(lst->content));
    // head = new_lst;
    // prev = lst;
    // lst = lst->next;
    // del(prev->content);
    // free(prev);
    // while (lst)
    // {
    //     new_lst->next = ft_lstnew(f(lst->content));
    //     prev = lst;
    //     lst = lst->next;
    //     del(prev->content);
    //     free(prev);
    // }
    // new_lst -> next = NULL;
    // return (head);
}