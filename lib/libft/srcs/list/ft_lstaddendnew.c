/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddendnew.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 04:24:24 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 10:48:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlist.h"
#include "ftio.h"

void	ft_lstaddendnew(t_list **alst, const void *data, size_t content_size)
{
	t_list *node;
	t_list *end;

	if (data == NULL)
		ft_error(__func__, __LINE__);
	if ((node = ft_lstnew(data, content_size)))
	{
		if (*alst == NULL)
			*alst = node;
		else
		{
			end = ft_lstlast(*alst);
			end->next = node;
		}
	}
	else
		ft_error(__func__, __LINE__);
}
