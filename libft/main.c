
#include <string.h>
#include <stdio.h>
#include "libft.h"

void	test_ft_memccpy()
{
	char *src = "This is a string";
	char dest[60];
	char dest2[60];
	void *res = ft_memccpy(dest, src, 's', 10);
	printf("res %s and %s\n", dest, (unsigned char *)res);
	memccpy(dest2, src, 's', 10);
	printf("res 2 %s and %s\n", dest2, (unsigned char *)res);
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
	
	}
	return (0);
}
