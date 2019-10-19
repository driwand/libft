
#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t len;
    char *str;

    str = (char*)s;
    len = ft_strlen(str) + 1;
    while (len > 0)
    {
        if (str[len] == c)
            return (&str[len]);
        len--;
    }
    return (NULL);
}