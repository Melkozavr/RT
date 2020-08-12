/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstgetidx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 01:56:00 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 10:48:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlist.h"
#include "ftio.h"

int		ft_lstgetidx(t_list *lst, t_list *to_get)
{
	int n;

	n = 0;
	while (lst != to_get && lst && lst->next)
	{
		lst = lst->next;
		n++;
	}
	if (lst != to_get)
		return (-1);
	return (n);
}
