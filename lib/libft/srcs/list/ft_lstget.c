/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstget.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 03:21:07 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlist.h"

t_list	*ft_lstget(t_list *alst, int var, int (*cmp)(void *elcontent, int rv))
{
	void *content;

	while (alst)
	{
		content = alst->content;
		if (cmp(content, var))
			return (alst);
		alst = alst->next;
	}
	return (NULL);
}
