

#include "libft.h"

void del(void *s)
{
    free(s);
}

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    del(lst->content);
    free(lst);
}

int main()
{
    t_list *lst;
    lst = ft_lstnew("ABC");
    printf("%s | %p\n", lst->content, lst->content);
    ft_lstdelone(lst, del);
    printf("%s | %p\n", lst->content, lst->content);
    ///printf("%s | %p\n", lst->content,lst->content);
    //lst -> content = "ff";
    //printf("%s | %p", lst->content,lst->content);
    
}