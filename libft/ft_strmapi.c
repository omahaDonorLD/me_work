#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	j;
	char	*str;

	j = 0;
	i = ft_strlen(s);
	str = (char *)malloc(i + 1);
	if (str && s && f)
	{
		while (j < i)
		{
			str[j] = f(j, s[j]);
			j++;
		}
		str[j] = '\0';
		return (str);
	}
	return (NULL);
}
