#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	c1;
	unsigned char	c2;

	while (n)
	{
		c1 = *s1++;
		c2 = *s2++;
		if (c1 != c2)
			return (c1 < c2 ? -1: 1);
		if (!c1)
			break;
		n--;
	}
	return (0);
}
