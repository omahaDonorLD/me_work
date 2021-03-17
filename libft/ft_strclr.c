#include "libft.h"

void	ft_strclr(char *str)
{
	if (str)
		while (*str != '\0')
			*str++ = '\0';
}
