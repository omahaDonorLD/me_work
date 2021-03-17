#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
			str[j] = f(s[j]);
			j++;
		}
		str[j] = '\0';
		return (str);
	}
	return (NULL);
}
