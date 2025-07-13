/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:07:04 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/07/13 16:07:05 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;

	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	const char str1[] = "Hello, World!";
	const char str2[] = "Hello, World!";
	int result;

	result = ft_memcmp(str1, str2, 13);
	if (result == 0)
		printf("As Strings são iguais.\n");
	else
		printf("As Strings são diferentes. Diferença: %d\n", result);

	return 0;
} */
