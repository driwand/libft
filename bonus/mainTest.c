#include <stdio.h>
#include "libft.h"

void *func1(void * a)
{
    a = a + 1;
    return ((void *) a);
}

void del (void * a)
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
    test3 = ft_lstnew(NULL);
    ft_lstadd_back(&test, test2);
    ft_lstadd_back(&test, test3);

    result = ft_lstmap(test, &func1, &del);

    while(result){
		printf("%s \n", result -> content);
		result = result -> next;
	}
    printf("\n");
    while(test){
		printf("%x \n", (unsigned int)(test -> content));
		test = test -> next;
	}
}