/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmovedown.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 02:13:14 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 10:48:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlist.h"
#include "ftio.h"

void	ft_lstmovedown(t_list **alst, t_list *to_move)
{
	t_list	*lst;
	int		idx;
	int		len;

	lst = *alst;
	len = ft_lstlen(lst);
	idx = ft_lstgetidx(lst, to_move);
	if (idx == -1)
		return ;
	if (idx == 0 && lst->next)
		ft_lstswapfirst(alst, lst, lst->next, lst->next->next);
	else if (idx < len - 1)
	{
		lst = ft_lstat(lst, idx - 1);
		ft_lstswap(lst, lst->next, lst->next->next, lst->next->next->next);
	}
}
