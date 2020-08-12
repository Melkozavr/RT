/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_normalize.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 18:43:14 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "librt.h"

void		vec3_normalize(t_vec3 *v1)
{
	float k;

	if (!v1)
		return ;
	k = vec3_mag(*v1);
	if (k == 0)
		return ;
	k = 1.0f / k;
	v1->x *= k;
	v1->y *= k;
	v1->z *= k;
}

t_vec3		vec3_normalize_(t_vec3 v1)
{
	float k;

	k = vec3_mag(v1);
	if (k == 0)
		return (v1);
	k = 1.0f / k;
	v1.x *= k;
	v1.y *= k;
	v1.z *= k;
	return (v1);
}
