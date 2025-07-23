/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:06:56 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/07/23 16:52:37 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* essa função só retorna se o int enviado é printavel */
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
