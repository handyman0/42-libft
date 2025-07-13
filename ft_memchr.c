/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:07:00 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/07/13 17:00:09 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *ptr;
	unsigned int target;
	size_t	i;

	ptr = (const unsigned char *)s;
	target = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == target)
			return ((void *)(ptr + i));
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
