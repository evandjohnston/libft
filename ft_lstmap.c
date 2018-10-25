/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evjohnst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 18:43:03 by evjohnst          #+#    #+#             */
/*   Updated: 2018/10/24 18:43:05 by evjohnst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*node;

	if (lst == NULL || f == NULL)
		return (NULL);
	if (!(node = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	node = f(lst);
	node->next = (lst->next) ? ft_lstmap(lst->next, f) : NULL;
	return (node);
}
