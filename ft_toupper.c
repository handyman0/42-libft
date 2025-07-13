/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmelo-do <lmelo-do@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:08:07 by lmelo-do          #+#    #+#             */
/*   Updated: 2025/07/13 16:08:08 by lmelo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

/* #include <stdio.h>
int main (void)
{
	printf("%c\n", ft_toupper('h'));
	return (0);
} */
