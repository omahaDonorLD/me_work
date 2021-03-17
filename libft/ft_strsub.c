#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!(str = (char *)malloc(len + 1)))
		return (NULL);
	str = ft_strncpy(str, s + start, len);
	str[len] = '\0';
	return (str);
}
