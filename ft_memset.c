#include "libft.h"

void *ft_memset(void *mem, int byte, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		*(char *)(mem + i) = byte;
		i++;
	}
	return (mem);
}