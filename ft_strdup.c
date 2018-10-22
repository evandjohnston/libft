/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evjohnst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 16:57:41 by evjohnst          #+#    #+#             */
/*   Updated: 2018/09/12 17:55:15 by evjohnst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*newstr;

	newstr = ((char *)malloc(sizeof(char) * (ft_strlen(s1) + 1)));
	if (newstr)
		return (ft_strcpy(newstr, s1));
	return (NULL);
}
