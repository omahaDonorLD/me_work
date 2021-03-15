#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char		*d;

	d = dest;
	while (n--)
	{
	       	if ((*d = *src) != '\0')
			src++;
		d++;
	}
	return (dest);
}
