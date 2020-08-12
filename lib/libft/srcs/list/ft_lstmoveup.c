/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmoveup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 01:49:01 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 10:48:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlist.h"
#include "ftio.h"

void	ft_lstmoveup(t_list **alst, t_list *to_move)
{
	t_list	*lst;
	int		idx;

	lst = *alst;
	idx = ft_lstgetidx(lst, to_move);
	if (idx == -1)
		return ;
	if (idx == 0)
		return ;
	else if (idx == 1)
		ft_lstswapfirst(alst, lst, lst->next, lst->next->next);
	else
	{
		lst = ft_lstat(lst, idx - 2);
		ft_lstswap(lst, lst->next, lst->next->next, lst->next->next->next);
	}
}
