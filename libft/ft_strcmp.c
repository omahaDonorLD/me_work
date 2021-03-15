#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	c1;
	unsigned char	c2;

	while (1)
	{
		c1 = *s1++;
		c2 = *s2++;
		if (c1 != c2)
			return (c1 < c2 ? -1: 1);
		if (!c1)
			break;
	}
	return (0);
}
