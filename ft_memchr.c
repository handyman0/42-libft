#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *start;
	unsigned int byte; 
	size_t	i;

	start = (const unsigned char *)s;
	byte = (unsigned int)c;
	i = 0;
	while (i < n)
	{
		if (start[i] == byte)
			return ((void *)(start + i));
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>
int main(void)
{
	char str[] = "Hello, World!";
	char *result;
	result = ft_memchr(str, 'W', 13);
	if (result)
		printf("Caractere encontrado: %c\n", *result);
	else
		printf("Caractere não encontrado.\n");
	return 0;
} */