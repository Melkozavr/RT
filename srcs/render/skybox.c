/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skybox.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 22:31:02 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 10:56:06 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "render.h"
#include "librt.h"

t_color	get_sky_color(t_scene scene, t_settings settings, t_ray ray)
{
	float azimuth;
	float polar;

	if (settings.skybox && scene.skybox->pixels != NULL)
	{
		vec3_cartesian_to_spherical(ray.dir, &azimuth, &polar);
		azimuth = remap_to_0_to_1(azimuth / M_PI_F);
		polar /= M_PI_F;
		return (sample(NULL, scene.skybox, (t_vec3){1 - azimuth, polar, 0}));
	}
	else
		return (settings.back_color);
}
