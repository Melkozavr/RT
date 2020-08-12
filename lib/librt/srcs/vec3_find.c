/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_find.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 16:12:10 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 20:43:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtstruct.h"

void	vec3_find(t_pt3 *origin, t_pt3 *dest, t_vec3 *value)
{
	if (!origin || !dest || !value)
		return ;
	value->x = dest->x - origin->x;
	value->y = dest->y - origin->y;
	value->z = dest->z - origin->z;
}
