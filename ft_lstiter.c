/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evjohnst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 18:42:55 by evjohnst          #+#    #+#             */
/*   Updated: 2018/10/24 18:43:01 by evjohnst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*next;

	if (lst == NULL || f == NULL)
		return ;
	while (lst)
	{
		next = lst->next;
		f(lst);
		lst = next;
	}
}
