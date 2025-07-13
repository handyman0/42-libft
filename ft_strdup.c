/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:07:28 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/07/13 16:07:29 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		i;

	dup = (char *)malloc(ft_strlen(s) + 1);
	i = 0;
	if (!dup)
		return (NULL);
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

#include <stdio.h>
int	main(void)
{
	char	*String = "ola pessoal";
	char	*NewString;
	NewString = ft_strdup(String);
	printf("A nova string é: %s", NewString);
	free(NewString);
	return (0);
}
