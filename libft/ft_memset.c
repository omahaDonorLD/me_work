
# include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	pos;

	pos = 0;
	while(pos < n)
		str[pos++] = (unsigned char)c;
	return (str);
}
