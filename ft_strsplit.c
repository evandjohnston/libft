/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evjohnst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 15:39:09 by evjohnst          #+#    #+#             */
/*   Updated: 2018/10/19 15:39:10 by evjohnst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**strs;
	int		i;
	int		j;
	int		n;

	n = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			while (s[i] == c)
				i++;
		else if (s[i])
		{
			n++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	if (!(strs = (char **)malloc(sizeof(char *) * n)))
		return NULL;
	while (--n >= 0)
	{
		while (i > 0 && s[i - 1] == c)
			i--;
		j = i;
		while (j > 0 && s[j - 1] != c)
			j--;
		strs[n] = ft_strndup(s + j, i - j);
		i = j;
	}
	return (strs);
}
