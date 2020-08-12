/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_cluster.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 03:50:44 by amerlon-          #+#    #+#             */
/*   Updated: 2020/05/21 10:48:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_CLUSTER_H
# define T_CLUSTER_H

# include "rtstruct.h"

typedef struct	s_cluster
{
	int			type;
	int			nb_obj;
	float		size_cluster;
	float		radius_spheres;
	t_pt3		pos;
	t_vec3		n;
}				t_cluster;

#endif
