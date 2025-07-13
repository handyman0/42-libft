#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
/* #include <stdio.h>
int	main(void)
{
	const char	*str = "ola, mundo";
	char	*ptr = ft_strchr(str, 'u');
	if (ptr != NULL)
		printf("Caractere encontrado: %c\n", *ptr);
	else
		printf("caractere não encontrado");
	return (0);
} */
