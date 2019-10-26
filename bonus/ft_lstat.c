#include "libft.h"

t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
    unsigned int i;
	t_list *list;

	list = begin_list;
	while (list)
	{
        if(i == nbr)
            return (list);
	  i++;
	  list = list->next;
	}
}