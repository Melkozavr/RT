/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ray_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 04:28:37 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "librt.h"
#include <stdlib.h>

void	ray_new(t_ray *res, t_pt3 *origin, t_vec3 *n)
{
	if (!res || !origin || !n)
		return ;
	vec3_cpy(&(res->origin), origin);
	vec3_cpy(&(res->dir), n);
	vec3_normalize(&res->dir);
}
