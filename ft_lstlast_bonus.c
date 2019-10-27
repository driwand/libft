/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkssiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 13:02:16 by abkssiba          #+#    #+#             */
/*   Updated: 2019/10/27 11:47:52 by abkssiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int		i;
	int		len;
	t_list	*last;

	len = ft_lstsize(lst);
	i = 0;
	while (i < len - 1)
	{
		lst = lst->next;
		i++;
	}
	last = lst;
	return (last);
}
