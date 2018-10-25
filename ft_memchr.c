/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evjohnst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 15:37:20 by evjohnst          #+#    #+#             */
/*   Updated: 2018/10/19 15:37:29 by evjohnst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*bee;

	i = 0;
	bee = (unsigned char *)b;
	while (i < len)
	{
		if (bee[i] == (unsigned char)c)
			return ((void *)(b + i));
		i++;
	}
	return (NULL);
}
