/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evjohnst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 15:38:56 by evjohnst          #+#    #+#             */
/*   Updated: 2018/10/19 15:38:58 by evjohnst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strequ(char const *s1, char const *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((*s1 == *s2) ? 1 : 0);
}