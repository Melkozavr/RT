/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b3apply_suffix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 15:11:47 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 10:56:06 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftbtree.h"

void
	ft_b3apply_suffix(t_btree *root, void (*applyf)(void *, size_t c_s))
{
	if (root == NULL)
		return ;
	if (root->left != NULL)
		ft_b3apply_suffix(root->left, applyf);
	if (root->right != NULL)
		ft_b3apply_suffix(root->right, applyf);
	applyf(root->content, root->content_size);
}

void
	ft_b3apply_suffix_wtarg(int arg, t_btree *root,
	void (*applyf)(int arg, void *c, size_t c_s))
{
	if (root == NULL)
		return ;
	if (root->left != NULL)
		ft_b3apply_suffix_wtarg(arg, root->left, applyf);
	if (root->right != NULL)
		ft_b3apply_suffix_wtarg(arg, root->right, applyf);
	applyf(arg, root->content, root->content_size);
}
