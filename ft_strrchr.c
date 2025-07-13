/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:07:58 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/07/13 17:05:58 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/* int	main(void)
{
	const char *str = "ola luiz, slv!";
	char	*ptr = ft_strrchr(str, 'l');
	if (ptr != NULL)
		printf("caractere encontrado: %s\n", ptr);
	else
		printf("caractere não encontrado.");
	return(0);
} */
