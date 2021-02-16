#include "libft.h"

void	*ft_memccpy(void *dest, const void *str, int c, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = str;
	if (str != NULL)
		while (n--)
		{
			*d++ = *s;
			if (*s++ == (unsigned char)c)
				return (d);
		}
	return (NULL);
}
