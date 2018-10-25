/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evjohnst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 16:57:41 by evjohnst          #+#    #+#             */
/*   Updated: 2018/09/12 17:55:15 by evjohnst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t len)
{
	char	*newstr;
	size_t	strlen;

	strlen = ft_strlen(s1);
	strlen = (len < strlen) ? len : strlen;
	newstr = ((char *)malloc(sizeof(char) * (strlen + 1)));
	if (newstr)
	{
		ft_strncpy(newstr, s1, strlen);
		newstr[strlen] = '\0';
		return (newstr);
	}
	return (NULL);
}
