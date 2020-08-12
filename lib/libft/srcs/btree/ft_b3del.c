/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b3del.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 16:20:03 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 10:56:06 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftbtree.h"

inline static void
	ft_b3map_suffix(t_btree *root, void (*del)(t_btree *))
{
	if (root == NULL)
		return ;
	if (root->left != NULL)
		ft_b3map_suffix(root->left, del);
	if (root->right != NULL)
		ft_b3map_suffix(root->right, del);
	del(root);
}

void
	ft_b3del(t_btree **root, void (*del)(t_btree *))
{
	ft_b3map_suffix(*root, del);
	root = NULL;
}
