
#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int len_src;
	unsigned int len_dest;

	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	if (size < len_dest)
		return (size + len_src);
	else
	{
		ft_strcat(dest, src);
		return (len_dest + len_src);
	}
}