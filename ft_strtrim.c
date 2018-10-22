/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evjohnst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 15:39:06 by evjohnst          #+#    #+#             */
/*   Updated: 2018/10/19 15:39:08 by evjohnst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		len;
	int		i;
	char	*str;

	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	len = 0;
	while (s[len])
		len++;
	while (len > 0 \
	&& (s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t'))
		len--;
	if ((str = (char *)malloc(sizeof(char) * len + 1)))
	{
		i = 0;
		while (i < len)
		{
			str[i] = s[i];
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	else
		return (NULL);
}
