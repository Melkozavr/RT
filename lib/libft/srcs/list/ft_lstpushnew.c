/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushnew.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 21:26:52 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 10:56:06 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlist.h"
#include "ftio.h"

void	ft_lstpushnew(t_list **alst, const void *data, size_t content_size)
{
	t_list *node;

	if (data == NULL)
		ft_error(__func__, __LINE__);
	if ((node = ft_lstnew(data, content_size)))
	{
		node->next = *alst;
		*alst = node;
	}
	else
		ft_error(__func__, __LINE__);
}
