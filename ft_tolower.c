#include "libft.h"

int ft_toupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

/* #include <stdio.h>
int main (void)
{
	printf("%c\n", ft_toupper('H'));
	return (0);
} */