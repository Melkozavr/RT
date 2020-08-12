/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter_find.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 15:55:45 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtstruct.h"

void	inter_find(t_inter *primary, t_pt3 *value)
{
	float dist;

	dist = primary->dist;
	value->x = primary->ray.origin.x + dist * primary->ray.dir.x;
	value->y = primary->ray.origin.y + dist * primary->ray.dir.y;
	value->z = primary->ray.origin.z + dist * primary->ray.dir.z;
}
