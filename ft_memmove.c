#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;
	size_t i = 0;

	if (!dest && !src)
		return NULL;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;

	if (d > s)
	{
		while (n--)
			d[n] = s[n];
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return dest;
}

/* #include <stdio.h>
int main(void)
{
	char dest[50] = "Hello, World!";
	const char src[] = "Goodbye, World!";
	
	ft_memmove(dest + 7, src, 15);
	printf("%s\n", dest); // Expected output: "Hello, Goodbye, World!"
	
	return 0;
} */