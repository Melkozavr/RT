/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddbk.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 08:14:46 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlist.h"

void	ft_lstaddbk(t_list **alst, t_list *new)
{
	if (new)
	{
		if (*alst != NULL)
		{
			ft_lstlast(*alst)->next = new;
			new->next = NULL;
		}
		else
			ft_lstadd(alst, new);
	}
}
