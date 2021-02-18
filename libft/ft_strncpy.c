#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char		*d;

	d = dest;
	while (n-- && ((*dest++ = *src++) != '\0'))
		/* does nothing */;
	ft_bzero(dest, n);
	return (d);
}

