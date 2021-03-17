#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	if (!(str = (char *)malloc(size + 1)))
		return (NULL);
	str = (char *)ft_memset(str, 0, size + 1);
	return (str);
}
