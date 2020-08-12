/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b3apply_infix.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 15:12:03 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 10:56:06 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftbtree.h"

void
	ft_b3apply_infix(t_btree *root, void (*applyf)(void *, size_t c_s))
{
	if (root == NULL)
		return ;
	if (root->left != NULL)
		ft_b3apply_infix(root->left, applyf);
	applyf(root->content, root->content_size);
	if (root->right != NULL)
		ft_b3apply_infix(root->right, applyf);
}

void
	ft_b3apply_infix_wtarg(int arg, t_btree *root,
	void (*applyf)(int arg, void *c, size_t c_s))
{
	if (root == NULL)
		return ;
	if (root->left != NULL)
		ft_b3apply_infix_wtarg(arg, root->left, applyf);
	applyf(arg, root->content, root->content_size);
	if (root->right != NULL)
		ft_b3apply_infix_wtarg(arg, root->right, applyf);
}
