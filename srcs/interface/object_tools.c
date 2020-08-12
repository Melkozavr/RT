/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   object_tools.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 14:41:32 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 10:48:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "render.h"
#include "librt.h"
#include "interface.h"

t_obj	*find_obj_at_pixel(t_data *app, int x, int y)
{
	t_inter	inter;
	t_ray	ray;

	cam_ray(app, &ray, x + 0.5, y + 0.5);
	inter_set(&inter, ray);
	cast_primary(app->scene.lst_obj, &inter);
	return (inter.obj);
}

void	edit_color_mat(t_color *target, char *label, t_material *mat)
{
	t_color	color_tmp;

	color_tmp = *target;
	if (igColorEdit3(label, &color_tmp.r, 0))
	{
		*target = color_tmp;
		mat->name = "custom";
	}
}
