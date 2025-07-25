/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:07:54 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/07/25 01:32:06 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	l_len;

	if (!*little)
		return ((char *)big);
	l_len = ft_strlen(little);
	i = 0;
	while (i + l_len <= len && big[i])
	{
		j = 0;
		while (big[i + j] == little[j])
		{
			j++;
			if (j == l_len)
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
