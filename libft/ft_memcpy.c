#include "libft.h"

void	*ft_memcpy(void *dest, const void *str, size_t n)
{
	size_t	pos;

	pos = 0;
	if (dest != NULL && str != NULL)
		while (pos < n)
		{
			((unsigned char*)dest)[pos] = ((unsigned char*)str)[pos];
			pos++;
		}
	return (dest);
}
