/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normal_sphere.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 00:20:07 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "librt.h"

void	normal_sphere(t_inter *inter)
{
	t_sphere	*sphere;
	t_vec3		insider;

	sphere = inter->obj->shape;
	vec3_sub(&insider, &sphere->origin, &inter->ray.origin);
	inter->n.x = inter->point.x - sphere->origin.x;
	inter->n.y = inter->point.y - sphere->origin.y;
	inter->n.z = inter->point.z - sphere->origin.z;
	if ((vec3_mag(insider) < sphere->radius) || inter->hit_pts.y == inter->dist)
		vec3_scalar(&inter->n, -1);
	vec3_normalize(&inter->n);
}
