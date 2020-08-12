/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter_setrefract.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 16:26:41 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 10:48:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "librt.h"

void	inter_setrefract(t_inter *inter, t_ray *res)
{
	res->origin = inter->point;
	res->dir = vec3_refract(inter->ray.dir, inter->n,
							inter->obj->material.refraction_idx);
	ray_offset_origin(res, inter->n);
}
