
#include "libft.h"

char			*ft_strcat(char *dest, char *src)
{
	int len_dest;
	int len_src;
	int i;

	i = 0;
	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	while (i < len_src)
	{
		dest[len_dest] = src[i];
		i++;
		len_dest++;
	}
	return (dest);
}