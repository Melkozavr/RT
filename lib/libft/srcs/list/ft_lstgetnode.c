/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstgetnode.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 17:02:35 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 10:48:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlist.h"

t_list
	*ft_lstgetnode(t_list *alst, int (*cmp)(void *c, void *k), void *key)
{
	void *content;

	while (alst)
	{
		content = alst->content;
		if (cmp(content, key))
			return (alst);
		alst = alst->next;
	}
	return (NULL);
}

t_list
	*ft_lstgetnode_by_content_ptr(t_list *alst, void *key)
{
	void *content;

	while (alst)
	{
		content = alst->content;
		if (content == key)
			return (alst);
		alst = alst->next;
	}
	return (NULL);
}
