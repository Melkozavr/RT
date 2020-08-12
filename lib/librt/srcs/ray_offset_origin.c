/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ray_offset_origin.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 15:38:24 by pcollio-          #+#    #+#             */
/*   Updated: 2020/05/21 10:48:05 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <librt.h>

void	ray_offset_origin(t_ray *ray, t_vec3 normal)
{
	float	offset_factor;

	if (vec3_dot(&ray->dir, &normal) > 0)
		offset_factor = SHADOW_BIAS;
	else
		offset_factor = -SHADOW_BIAS;
	vec3_scalar(&normal, offset_factor);
	vec3_add(&ray->origin, &ray->origin, &normal);
}
