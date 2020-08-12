/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ray_transform.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 19:29:20 by pcollio-          #+#    #+#             */
/*   Updated: 2020/05/21 10:48:05 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "librt.h"

t_ray	ray_transform(t_ray ray, t_matrix m)
{
	apply_matrix(&ray.dir, &m);
	apply_matrix(&ray.origin, &m);
	return (ray);
}
