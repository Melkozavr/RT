/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_spherical_cartesian.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 17:59:42 by pcollio-          #+#    #+#             */
/*   Updated: 2020/05/21 10:48:05 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtstruct.h"
#include <math.h>

/*
** acos() maps [-1, 1] to [PI, 0]
** atan() maps [-inf, +inf] to [-PI, PI]
*/

void	vec3_cartesian_to_spherical(t_vec3 dir, float *azimuth, float *polar)
{
	*polar = acosf(dir.y);
	*azimuth = atan2f(dir.x, dir.z);
}
