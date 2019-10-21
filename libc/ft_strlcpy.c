
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len_src;
	size_t i;

	if (!src)
		return 0;
	i = 0;
	len_src = ft_strlen(src);
	if (!dest)
		return (len_src);
	while (src[i] && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
	dest[i] = '\0';
	return (len_src);
}