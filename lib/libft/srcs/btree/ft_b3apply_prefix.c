/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b3apply_prefix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 15:10:39 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 10:56:06 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftbtree.h"

void
	ft_b3apply_prefix(t_btree *root, void (*applyf)(void *, size_t c_s))
{
	if (root == NULL)
		return ;
	applyf(root->content, root->content_size);
	if (root->left != NULL)
		ft_b3apply_prefix(root->left, applyf);
	if (root->right != NULL)
		ft_b3apply_prefix(root->right, applyf);
}

void
	ft_b3apply_prefix_wtarg(int arg, t_btree *root,
	void (*applyf)(int arg, void *c, size_t c_s))
{
	if (root == NULL)
		return ;
	applyf(arg, root->content, root->content_size);
	if (root->left != NULL)
		ft_b3apply_prefix_wtarg(arg, root->left, applyf);
	if (root->right != NULL)
		ft_b3apply_prefix_wtarg(arg, root->right, applyf);
}
