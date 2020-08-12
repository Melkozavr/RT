/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b3new.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 14:47:41 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 10:56:06 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftbtree.h"
#include "ftmem.h"
#include <stdlib.h>

t_btree	*ft_b3new(void *content, size_t content_size)
{
	t_btree	*node;

	if (!(node = (t_btree*)malloc(sizeof(t_btree))))
		return (NULL);
	if (content == NULL)
	{
		node->content = NULL;
		node->content_size = 0;
	}
	else
	{
		if (!(node->content = malloc(content_size)))
			return (NULL);
		ft_memcpy(node->content, content, content_size);
		node->content_size = content_size;
	}
	node->right = NULL;
	node->left = NULL;
	return (node);
}
