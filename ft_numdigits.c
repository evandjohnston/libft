/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numdigits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evjohnst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 18:07:28 by evjohnst          #+#    #+#             */
/*   Updated: 2018/10/25 18:07:35 by evjohnst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numdigits(long n, int base)
{
	int		len;

	if (n == 0)
		return (1);
	len = (n < 0) ? 1 : 0;
	while (n != 0)
	{
		n /= base;
		len++;
	}
	return (len);
}