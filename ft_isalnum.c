/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:06:25 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/07/23 17:24:14 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* essa função função só retorna caractere alphanumericos */
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
