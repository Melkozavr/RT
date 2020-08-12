/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 10:15:24 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlist.h"

void	ft_lstrev(t_list **alst)
{
	t_list	*palst;
	t_list	*tmp;

	tmp = NULL;
	if (!alst || !*alst)
		return ;
	while (*alst)
	{
		palst = (*alst)->next;
		(*alst)->next = tmp;
		tmp = *alst;
		*alst = palst;
	}
	*alst = tmp;
}
