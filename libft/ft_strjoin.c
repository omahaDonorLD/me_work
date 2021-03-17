#include "libft.h"

char	*ft_strjoin(const char *s1, char const *s2)
{
	char	*str;
	int	len1;
	int	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!(str = (char *)malloc(len1 + len2 + 1)))
		return (NULL);
	str = ft_strcpy(str, s1);
	str = ft_strcat(str, s2);
	str[len1 + len2] = '\0';
	return (str);
}
