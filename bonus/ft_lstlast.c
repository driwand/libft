#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    int i;
    int len;
    t_list *last;

    len = ft_lstsize(lst);
    i = 0;
    while (i < len - 1)
    {
        lst = lst -> next;
        i++;
    }
    last = lst;
    return (last);
}