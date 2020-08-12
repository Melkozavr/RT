/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filters.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 15:38:37 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 10:48:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "render.h"
#include "t_data.h"

t_color	anti_aliasing(t_color col_prim, t_data *app, int x, int y)
{
	t_ray	ray;
	float	offset;

	offset = 0.15;
	cam_ray(app, &ray, x + offset, y + offset);
	color_add(&col_prim, recursive_cast(app->scene, app->settings, ray, 0));
	cam_ray(app, &ray, x + 1 - offset, y + offset);
	color_add(&col_prim, recursive_cast(app->scene, app->settings, ray, 0));
	cam_ray(app, &ray, x + offset, y + 1 - offset);
	color_add(&col_prim, recursive_cast(app->scene, app->settings, ray, 0));
	cam_ray(app, &ray, x + 1 - offset, y + 1 - offset);
	color_add(&col_prim, recursive_cast(app->scene, app->settings, ray, 0));
	color_scalar(&col_prim, 0.2);
	return (col_prim);
}
