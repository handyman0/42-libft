#include "libft.h"

int	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
		return (src_len + size);
	i = 0;
	while (src[i] && (dest_len + i < size - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

/* int	main(void)
{
	char dest[20] = "Hello";
	char src[] = " World!";
	size_t size = 20;

	int result = ft_strlcat(dest, src, size);
	printf("Resultado: %d\n", result);
	printf("Destino após a concatenação: %s\n", dest);

	return 0;
}
*/