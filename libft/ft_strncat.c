#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t size)
{
	char	*d;

	d = dest;
	if (size)
	{
		while (*dest)
			dest++;
		while ((*dest++ = *src++) != 0)
		{
			if (--size == 0)
			{
				*dest = '\0';
				break;
			}
		}
	}
	return (d);
}
