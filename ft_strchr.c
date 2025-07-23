/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:07:24 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/07/23 19:15:14 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* procura a primeira ocorrencia do caractere c dentro da string, se não retorna NULL */
char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s)
			return (NULL);
		s++;
	}
	return ((char *)s);
}
