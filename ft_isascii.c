/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:06:43 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/07/23 16:50:54 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* essa função so retorna se o int enviado estiver dentro da ascii table */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
