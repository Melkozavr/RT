/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstgetelt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 16:30:39 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 10:56:06 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlist.h"

void
	*ft_lstgetelt(t_list *alst, int (*cmp)(void *c, void *k), void *key)
{
	void *content;

	while (alst)
	{
		content = alst->content;
		if (cmp(content, key))
			return (content);
		alst = alst->next;
	}
	return (NULL);
}

void
	*ft_lstgetelt_by_content_ptr(t_list *alst, void *key)
{
	void *content;

	while (alst)
	{
		content = alst->content;
		if (content == key)
			return (content);
		alst = alst->next;
	}
	return (NULL);
}
