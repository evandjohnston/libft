/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evjohnst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 15:38:25 by evjohnst          #+#    #+#             */
/*   Updated: 2018/10/19 15:38:27 by evjohnst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//TODO: Handle values over long?

int		ft_atoi(const char *str)
{
	long	num;
	int		sign;

	while (ft_isspace(*str))
		str++;
	sign = (*str == '-') ? -1 : 1;
	if (*str == '-' || *str == '+')
		str++;
	num = 0;
	while (ft_isdigit(*str))
	{
		num += *str - '0';
		if (ft_isdigit(*(++str)))
			num *= 10;
	}
	return ((num * (long)sign));
}
