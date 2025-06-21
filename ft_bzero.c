#include "libft.h"

void ft_bzero(void *mem, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		*(char *)(mem + i) = 0;
		i++;
	}
}