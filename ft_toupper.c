#include "libft.h"

int ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

/* #include <stdio.h>
int main (void)
{
	printf("%c\n", ft_toupper('h'));
	return (0);
} */