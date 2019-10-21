#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *newlist;

    newlist = malloc(sizeof(newlist));
    newlist -> content = content;
    newlist -> next = NULL;
    return (newlist);
}