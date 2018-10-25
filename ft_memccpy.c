/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evjohnst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 15:37:05 by evjohnst          #+#    #+#             */
/*   Updated: 2018/10/19 15:37:07 by evjohnst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst,	const void *src, int c,	size_t len)
{
	size_t	i;
	unsigned char	*dest;
	unsigned char	*sorc;

	i = 0;
	dest = (unsigned char *)dst;
	sorc = (unsigned char *)src;
	while (i < len)
	{
		dest[i] = sorc[i];
		if (sorc[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
