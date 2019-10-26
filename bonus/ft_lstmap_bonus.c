/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkssiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 14:06:38 by abkssiba          #+#    #+#             */
/*   Updated: 2019/10/26 17:43:57 by abkssiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *head;
	t_list *new;

	if (!lst || !f)
		return (NULL);
	head = ft_lstnew(f(lst->content));
	lst = lst->next;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, new);
		lst = lst->next;
	}
	return (head);

	// if (!lst || !f || !del)
	// 	return (NULL);
	// if (!(head = malloc(sizeof(t_list))))
	// 	return (ft_lstdel(head, del));
	// head->content = f(lst->content);
	// head->next = NULL;
	// new = head;
	// lst = lst->next;
	// while (lst)
	// {
	// 	new->next = ft_lstnew(f(lst->content));
	// 	new = new->next;
	// 	if (!new)
	// 	{
	// 		ft_lstclear(&head, del);
	// 		return (NULL);
	// 	}
	// 	lst = lst->next;
	// }
	// return (head);
}
