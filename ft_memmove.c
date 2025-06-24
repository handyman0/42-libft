#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;

	if (!dest && !src)
		return (NULL);
	if (!n)
		return (dest);
	if (dest > src)
	{
		i = n - 1;
		while (i--)
			*(unsigned char *)(dest + i + 1) = *(unsigned char *)(src + i + 1);
		*(unsigned char *)(dest + i + 1) = *(unsigned char *)(src + i + 1); 
	}
	else
	{
		i = 0;
		while(i++ < n)
			*(unsigned char *)(dest + i - 1) = *(unsigned char *)(src + i - 1);
	}
	return (dest);
}