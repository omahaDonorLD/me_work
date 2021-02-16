#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	pos;

	pos = 0;
	if (str != NULL)
		while (pos < n)
			((unsigned char*)str)[pos++] = (unsigned char)c;
	return (str);
}
