#include "libft.h"

void ft_lstadd_back(t_list **alst, t_list *new)
{
    t_list *lst;

    lst = *alst;
    while (lst -> next)
    {
        lst = lst -> next;
    }
    lst -> next = new;
}