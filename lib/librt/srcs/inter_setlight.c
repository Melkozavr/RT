/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter_setlight.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 18:26:29 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "librt.h"
#include "ftmem.h"

void	inter_setlight(t_inter *inter, t_inter *light_inter, t_light *light)
{
	t_ray	ray;

	ray.origin = inter->point;
	vec3_find(&ray.origin, &light->origin, &ray.dir);
	light_inter->dist = vec3_mag(ray.dir);
	vec3_normalize(&ray.dir);
	ray_offset_origin(&ray, inter->n);
	light_inter->obj = NULL;
	ft_memcpy(&light_inter->ray, &ray, sizeof(t_ray));
	ft_memcpy(&light_inter->n, &inter->n, sizeof(t_vec3));
}
