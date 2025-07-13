/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:07:54 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/07/13 19:09:31 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!ft_strlen(little))
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		while ((big + i)[j] == little[j] && (i + j) < len)
		{
			if (j == ft_strlen(little) - 1)
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
