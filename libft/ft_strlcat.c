#include "libft.h"

size_t	ft_strlcat(char *dest, const void *src, size_t size)
{
	size_t	d_len;
	size_t	len;
	size_t	res;

	d_len = ft_strlen(dest);
	len = ft_strlen(src);
	res = d_len + len;
	if (d_len >= size)
		return (res);
	dest += d_len;
	size -= d_len;
	if (len >= size)
		len = size - 1;
	ft_memcpy(dest, src, len);
	dest[len] = '\0';
	return (res);
}

