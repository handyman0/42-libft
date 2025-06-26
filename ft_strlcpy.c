#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	if (!size)
		return (ft_strlen(src));
	i = 0;
		while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

/* int	main(void)
{
	char dest[20] = "Hello";
	char src[] = "fala galerinha do canal sabia que nao adianta defender politico pois todos sao ladroes";
	size_t size = 20;

	size_t result = ft_strlcpy(dest, src, size);
	printf("Resultado: %zu\n", result);
	printf("Destino após a cópia: %s\n", dest);

	return 0;
} */