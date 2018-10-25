/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evjohnst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 15:39:11 by evjohnst          #+#    #+#             */
/*   Updated: 2018/10/19 15:39:13 by evjohnst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_numdigits(int n, int base)
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

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_numdigits(n, 10);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
			return (NULL);
	str[len] = '\0';
	str[0] = (n < 0) ? '-' : '0';
	while (n != 0)
	{
		str[--len] = (n % 10) * ((n < 0) ? -1 : 1) + '0';
		n /= 10;
	}
	return (str);
}
