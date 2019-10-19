
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len_src;
	size_t	len_dest;
	int i;
	int sz;
	int res;

	sz = size;
	i = 0;
	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	if (size < len_dest)
		res = size + len_src;
	else
		res = len_dest + len_src;
	while (src[i] && i < (int)size - 1)
    {
        dest[i] = src[i];
        i++;
    }
			
		dest[i] = '\0';
	return (res);
}