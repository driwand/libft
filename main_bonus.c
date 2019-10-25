#include "libft.h"

int main()
{
	// // ft_lstnew
	// printf("\033[1;31m");
	// printf("*** ft_lstnew ***\n");
	// printf("\033[0m");
    // t_list *lsn;
    // lsn = ft_lstnew("heello");
	// int i = 0;
    // //printf("%s",ls->content);
    // return (0);

	// t_list **lst;
	// lst[0] = lsn;
	// // ft_lstadd_front
	// printf("\033[1;31m");
	// printf("*** ft_lstadd_front ***\n");
	// printf("\033[0m");
    // t_list *l;
	// l = ft_lstnew("world");
    // ls = ft_lstadd_front(lst,l);
    // printf("%s",lst[0] -> content);


	// // ft_lstlast
	// t_list *ls;
	// ls = NULL;
	// ls = ft_lstnew("hello");
	// ft_lstadd_front(&ls, "world");
	// printf("%s",ls ->next ->content);
	// t_list *last;
	// last = ft_lstlast(ls);
	// printf("%s", last -> content);
    // return (0);

	// ft_lstadd_back
	t_list *ls;
	t_list *lb;
	ls = ft_lstnew("A");
	lb = ft_lstnew("B");
	ft_lstadd_back(&ls , lb);
	while(ls){
		printf("%s", ls -> content);
		ls = ls -> next;
	}
}