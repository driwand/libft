#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    del = &free;
    while (*lst)
    {
        *lst = *lst -> next;
        del(*lst);
    }
    *lst = NULL;
}