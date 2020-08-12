/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ui_csg.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 13:30:23 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 10:48:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "interface.h"
#include "rtstruct.h"
#include "librt.h"

void
	ui_csg_btree(t_data *app, t_btree *node)
{
	if (node->content_size == sizeof(t_obj))
	{
		ui_object(app, node->content);
		return ;
	}
	node_type_list((t_csg_op*)node->content);
	if (igTreeNodeStr("Left"))
	{
		ui_csg_btree(app, node->left);
		igTreePop();
	}
	if (igTreeNodeStr("Right"))
	{
		ui_csg_btree(app, node->right);
		igTreePop();
	}
}

void
	ui_csg(void *app_v, void *shape)
{
	t_csg	*csg;
	t_data	*app;

	app = app_v;
	csg = shape;
	ui_csg_btree(app, csg->root);
}
