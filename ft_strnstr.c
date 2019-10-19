
#include "libft.h"

char    *ft_strnstr(const char	*big, const char *little, size_t len)
{
    char *str1;
    char *str2;
    int i;
    int j;

    i = 0;
    str1 = (char *)big;
    str2 = (char *)little;
    while (str1[i] && len--)
    {
        j = 0;
        while (str1[i + j] == str2[j] && str2[j])
            j++;
        if (!str2[j])
            return (str1 + i);
        i++;
    }
    return (0);
}
