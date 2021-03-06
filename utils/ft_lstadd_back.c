/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchelste <bchelste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 12:44:51 by bchelste          #+#    #+#             */
/*   Updated: 2021/03/15 00:22:28 by bchelste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../srcs/cub3d.h"

void		ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;

	p = *lst;
	if ((lst == NULL) || (new == NULL))
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		while (p->next != NULL)
			p = p->next;
		p->next = new;
	}
}
