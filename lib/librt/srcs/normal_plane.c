/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normal_plane.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 00:59:23 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "librt.h"

void	normal_plane(t_inter *inter)
{
	t_plane	*plane;

	plane = inter->obj->shape;
	vec3_cpy(&inter->n, &plane->n);
	if (vec3_dot(&plane->n, &inter->ray.dir) > 0)
		vec3_scalar(&inter->n, -1);
}
