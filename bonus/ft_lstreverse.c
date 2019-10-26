#include "libft.h"

void ft_lstreverse(t_list **begin_list)
{
	t_list	*curr;
	t_list	*prev;
	t_list	*next;

	curr = *begin_list;
	prev = 0;
	next = 0;
	while (curr)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*begin_list = prev;	
}