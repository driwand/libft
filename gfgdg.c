#include <unistd.h>
#include "libft.h"
void    ft_bzero(void *s, size_t n)
{
    char *str;

    str = (char*)s;
    if (n == 0)
        return ;
    while (n > 0)
    {
        *str = '\0';
        n--;
        str++;
    }
}
int main() {
    int *arr = malloc(sizeof(int) * 4);
    for (int i = 0; i < 4; i++)
        arr[i] = 1;
    //ft_bzero(s, 4);
    ft_memset (arr, '0', 4);
    for (int i = 0; i < 4; i++)
        printf("%i ", arr[i]);
}