#include <stdio.h>
#include "libft.h"

void *func1(void *a)
{
    char *s = ft_strdup(a);
    *s = *s + 1;
    return ((void *)s);
}

void del (void *a)
{
    a = 0;
}


int main(void)
{
    t_list *test;
    t_list *test2;
    t_list *test3;
    t_list *result;
    
    test = ft_lstnew("a");
    test2 = ft_lstnew("b");
    test3 = ft_lstnew("c");
    
    ft_lstadd_back(&test, test2);
    ft_lstadd_back(&test, test3);
    result = ft_lstmap(test, &func1, &del);

    while(result){
		printf("%s \n", result -> content);
		result = result -> next;
	}
    printf("\n");
    while(test){
		printf("%s \n", (test -> content));
		test = test -> next;
	}
}