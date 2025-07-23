/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:06:13 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/07/23 20:47:55 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Preenche 'n' bytes da memória apontada por 'mem' com zeros */
void	ft_bzero(void *mem, size_t n)
{
	char	*ptr;

	ptr = (char *)mem;
	while (n--)
		*ptr++ = 0;
}
